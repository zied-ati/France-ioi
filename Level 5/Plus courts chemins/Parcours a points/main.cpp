#include <bits/stdc++.h>
#define N 10000
#define M 2
 
using namespace std;
typedef pair<int,int> ii;
inline int MAX(int a,int b){return (a>b)?a:b;}
int n,m,s,e;
int a,b,d; 
int dis[N][M];
int vis[N];
vector<ii> g[N];
queue<ii> Q;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>s>>e;
    for(int i=0;i<m;++i)
    {
      cin>>a>>b>>d;
      g[a].push_back(ii(b,d));
    }
    for(int i=1;i<=n;++i)
    {
      vis[i]=0;
      dis[i][0]=-0x7f7f7f7f;
      dis[i][0]=-0x7f7f7f7f;
    }
    dis[s][0]=0;
    dis[s][1]=0;
    Q.push(ii(0,s));
    long long int maximum = -0x7f7f7f7f;
    int p=0;
    while(!Q.empty())
    {
      int a=Q.front().second;
      int t=Q.front().first;
      Q.pop();
      if(t!=p)
      {
        for(int i=1;i<=n;++i)
        {
          dis[i][0]=dis[i][1];
          vis[i]=0;
        }
        p++;
      }
      if(t==e)
      {
        break;
      }
      else
      {
        for(int i=0;i<g[a].size();++i)
        {
          if(dis[g[a][i].first][1]<dis[a][0]+g[a][i].second)
          {
            dis[g[a][i].first][1]=dis[a][0]+g[a][i].second;
            if(!vis[g[a][i].first])
            {
              Q.push(ii(t+1,g[a][i].first));
              vis[g[a][i].first]=1;
            }
          }
        }
      }
    }
    while(!Q.empty()) Q.pop();
    for(int i=1;i<=n;++i)
      maximum=MAX(maximum,dis[i][0]);
    cout<<maximum<<"\n";
    return 0;
}