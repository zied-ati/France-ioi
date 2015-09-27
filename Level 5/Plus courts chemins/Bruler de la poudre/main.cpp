#include <bits/stdc++.h>
#define N 1024
#define DIR 4
 
using namespace std;
typedef pair<int,int> ii;
inline int MAX(int a,int b){return (a>b)?a:b;}
int n,m,s;
int a,b,d; 
int dis[N];
int vis[N];
vector<ii> g[N];
vector<ii> ans;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>s;
    for(int i=0;i<m;++i)
    {
      cin>>a>>b>>d;
      g[a].push_back(ii(b,d));
      g[b].push_back(ii(a,d));
    }
    for(int i=1;i<=n;++i)
    {
      vis[i]=0;
      dis[i]=0x7fffffff;
    }
    priority_queue<ii,vector<ii>,greater<ii> > Q;
    dis[s]=0;
    Q.push(ii(dis[s],s));
    while(!Q.empty())
    {
      int a=Q.top().second;
      Q.pop();
      vis[a]=1;
      for(int i=0;i<g[a].size();++i)
      {
        if(!vis[g[a][i].first])
        {
          if(dis[g[a][i].first]>dis[a]+g[a][i].second)
          {
            dis[g[a][i].first]=dis[a]+g[a][i].second;
            Q.push(ii(dis[g[a][i].first],g[a][i].first));
          }
        }
      }
    }
    for(int i=1;i<=n;++i)
    {
      ans.push_back(ii(dis[i],i));
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<n;++i)
      cout<<ans[i].first<<" "<<ans[i].second<<"\n";
    return 0;
}