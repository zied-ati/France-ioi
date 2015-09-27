#include <bits/stdc++.h>
#define N 10010
 
using namespace std;

typedef pair<int,int> ii;

vector<int> g[N];
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
      cin>>a>>b;
      int j;
      for(j=0;j<g[a].size();++j)
        if(b==g[a][j])
          break;
      if(j==g[a].size())
        g[a].push_back(b);
    }
    queue<int> Q;
    dis[1]=1;
    Q.push(1);
    while(!Q.empty())
    {
      int p=Q.front();
      vis[p]=0;
      Q.pop();
      for(int i=0;i<g[p].size();++i)
      {
        dis[g[p][i]]+=dis[p];
        if(!vis[g[p][i]])
        {
          vis[g[p][i]]=1;
          Q.push(g[p][i]);
        }
      }
      if(p!=n)
        dis[p]=0;
    }
    cout<<dis[n]<<"\n";
    return 0;
}