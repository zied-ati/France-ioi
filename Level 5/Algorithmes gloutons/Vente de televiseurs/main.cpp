#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define NIL 0
#define INF (1<<28)

vector< int > G[MAX];
int n, m, match[MAX], dist[MAX];

bool bfs() {
    int i, u, v, len;
    queue< int > Q;
    for(i=1; i<=n; i++) {
        if(match[i]==NIL) {
            dist[i] = 0;
            Q.push(i);
        }
        else dist[i] = INF;
    }
    dist[NIL] = INF;
    while(!Q.empty()) {
        u = Q.front(); Q.pop();
        if(u!=NIL) {
            len = G[u].size();
            for(i=0; i<len; i++) {
                v = G[u][i];
                if(dist[match[v]]==INF) {
                    dist[match[v]] = dist[u] + 1;
                    Q.push(match[v]);
                }
            }
        }
    }
    return (dist[NIL]!=INF);
}

bool dfs(int u) {
    int i, v, len;
    if(u!=NIL) {
        len = G[u].size();
        for(i=0; i<len; i++) {
            v = G[u][i];
            if(dist[match[v]]==dist[u]+1) {
                if(dfs(match[v])) {
                    match[v] = u;
                    match[u] = v;
                    return true;
                }
            }
        }
        dist[u] = INF;
        return false;
    }
    return true;
}

int hopcroft_karp() {
    int matching = 0, i;
    while(bfs())
        for(i=1; i<=n; i++)
            if(match[i]==NIL && dfs(i))
                matching++;
    return matching;
}

typedef pair<int,int> ii;

int a,b;
vector<ii> r;

int main() {
    cin>>n;

    for(int i=0;i<n;++i)
    {
        cin>>a>>b;
        r.push_back(ii(a,b));
    }
    cin>>m;
    int cnt=0;
    for(int i=0;i<m;++i)
    {
        cin>>a>>b;
        for(int j=0;j<n;++j)
        {
            if(a<=r[j].first && b<=r[j].second)
            {
                G[i+1].push_back(j+m+1);
                cnt++;
            }
        }
    }
    n=n+m;
    m=cnt;
    cout << hopcroft_karp() << endl;
}