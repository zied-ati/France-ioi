#include <bits/stdc++.h>
#define N 10000
#define M 2
 
using namespace std;
typedef pair<int, int> ii;
inline int MAX(int a,int b){return (a>b)?a:b;}
int n,m;
int a,b,d; 
int dis[N];
int vis[N];
int cnt[N];
vector<ii> g[N];
queue<int> Q;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
      cin>>a>>b>>d;
      g[a].push_back(ii(b,d));
    }
    for(int i=1;i<=n;++i)
    {
      dis[i]=0x3fffffff;
      vis[i]=0;
      cnt[i]=0;
    }
    dis[1]=0;
    Q.push(1);
    bool problem=false;
    while(!Q.empty())
    {
      int a=Q.front();
      vis[a]=0;
      Q.pop();
      for(int i=0;i<g[a].size();++i)
      {
        if(dis[g[a][i].first]>dis[a]+g[a][i].second)
        {
          dis[g[a][i].first]=dis[a]+g[a][i].second;
          if(!vis[g[a][i].first])
          {
            Q.push(g[a][i].first);
            vis[g[a][i].first]=1;
          }
          if(++cnt[a]>n)
          {
            cout<<"ERREUR\n";
            exit(0);
          }
        }
      }
    }
    cout<<dis[n]<<"\n";
    return 0;
}