#include <bits/stdc++.h>
#define N 10010
 
using namespace std;

typedef pair<int,int> ii;

vector<ii> g[N];
int vis[N]={0};
int dis[N]={0};
int n,m,a,b,d;
int ans;

//int find(vector <int>& C, int x){return (C[x]==x) ? x : C[x]=find(C, C[x]);} //C++
//int find(int x){return (C[x].first==x)?x:C[x].first=find(C[x].first);}


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
    queue<int> Q;
    Q.push(1);
    while(!Q.empty())
    {
      int p=Q.front();
      vis[p]=0;
      Q.pop();
      for(int i=0;i<g[p].size();++i)
      {
        if(dis[g[p][i].first]<dis[p]+g[p][i].second)
        {
          dis[g[p][i].first]=dis[p]+g[p][i].second;
          if(!vis[g[p][i].first])
          {
            vis[g[p][i].first]=1;
            Q.push(g[p][i].first);
          }
        }
      }
    }
    cout<<dis[n]<<"\n";
    return 0;
}