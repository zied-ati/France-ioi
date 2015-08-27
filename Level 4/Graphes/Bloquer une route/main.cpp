#include <bits/stdc++.h>
#define N 1024
#define M 10010

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
typedef pair<int,int> ii;
vector<int> g[N];
int low[N];
int pre[N];
int n,m,a,b;
int cnt;
vector<ii> bridges;

bool cycle;

bool dfs(int s,int e)
{
    pre[e]=cnt++;
    low[e]=pre[e];
    for(int i=0;i<g[e].size();++i)
    {
        if(pre[g[e][i]]==-1)
        {
            dfs(e,g[e][i]);
            low[e]=MIN(low[e],low[g[e][i]]);
            if(low[g[e][i]]==pre[g[e][i]])
            {
                bridges.push_back(ii(e,g[e][i]));
            }
        }
        else if(g[e][i]!=s)
        {
            low[e]=MIN(low[e],pre[g[e][i]]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cnt=0;
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
      cin>>a>>b;
      g[a].push_back(b);
      g[b].push_back(a);
    }
    for(int i=1;i<=n;++i)
    {
        low[i]=-1;
        pre[i]=-1;
    }
    for(int i=1;i<=n;++i)
    {
        if(pre[i]==-1)
            dfs(i,i);
    }
    sort(bridges.begin(),bridges.end());
    cout<<bridges.size()<<"\n";
    for(unsigned int i=0;i<bridges.size();++i)
      cout<<bridges[i].first<<" "<<bridges[i].second<<"\n";
    return 0;
}
