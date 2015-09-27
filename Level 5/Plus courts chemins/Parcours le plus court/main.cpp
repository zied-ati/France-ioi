#include <bits/stdc++.h>
#define N 1024
#define DIR 4
 
using namespace std;
typedef pair<int,int> ii;
inline int MAX(int a,int b){return (a>b)?a:b;}
int n,m,s,e;
int a,b,d; 
int dis[N];
int vis[N];
int pre[N];
vector<ii> g[N];
vector<int> ans;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>s>>e;
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
      pre[i]=0;
    }
    priority_queue<ii,vector<ii>,greater<ii> > Q;
    dis[s]=0;
    pre[s]=s;
    Q.push(ii(dis[s],s));
    while(!Q.empty())
    {
      int a=Q.top().second;
      Q.pop();
      if(a==e)
        break;
      vis[a]=1;
      for(int i=0;i<g[a].size();++i)
      {
        if(!vis[g[a][i].first])
        {
          if(dis[g[a][i].first]>dis[a]+g[a][i].second)
          {
            pre[g[a][i].first]=a;
            dis[g[a][i].first]=dis[a]+g[a][i].second;
            Q.push(ii(dis[g[a][i].first],g[a][i].first));
          }
        }
      }
    }
    while(!Q.empty()) Q.pop();
    int t=e;
    ans.push_back(e);
    while(t!=s)
    {
      ans.push_back(pre[t]);
      t=pre[t];
    }
    cout<<dis[e]<<" "<<ans.size()<<"\n";
    for(int i=ans.size()-1;i>=0;--i)
    {
      if(i)
        cout<<ans[i]<<" ";
      else
        cout<<ans[i];
    }
    cout<<"\n";
    return 0;
}