#include <bits/stdc++.h>
#define N 1024
#define M 4

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
vector<int> g[N];
int visited[N];
int nr[N];
int n,a;
int b,c,d;

bool BellmandFord(int s)
{
    queue<int> Q;
    for(int i=1;i<=n;++i)
    {
        visited[i]=0;
        nr[i]=0;
    }
    Q.push(s);
    while(!Q.empty())
    {
        int f=Q.front();
        Q.pop();
        visited[f]=0;
        for(unsigned int i=0;i<g[f].size();++i)
        {
            if(++nr[g[f][i]]>N)
            {
                while(!Q.empty()) Q.pop();
                return true;
            }
            if(!visited[g[f][i]])
                Q.push(g[f][i]);
            visited[g[f][i]]=1;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>a;
    for(int i=0;i<a;++i)
    {
      cin>>b>>c;
      g[b].push_back(c);
    }
    bool ans=false;
    for(int i=1;i<=n;++i)
    {
        ans=BellmandFord(i);
        if(ans)
            break;
    }
    if(!ans)
        cout<<"NON"<<"\n";
    else
        cout<<"OUI"<<"\n";
    return 0;
}

