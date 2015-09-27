#include <bits/stdc++.h>
#define N 1024
  
using namespace std;
inline int MAX(int a,int b){return (a>b)?a:b;}
int n,m;
int a,b,d; 
int vis[N];
vector<int> g[N];
int visited[N]={0};
 
void DFSUtil(int i)
{
  visited[i]=1;
  for(int j=0;j<g[i].size();++j)
    if(!visited[g[i][j]])
      DFSUtil(g[i][j]);
}
 
int DFS(int n)
{
  int cnt=0;
  for(int i=0;i<n;++i)
  {
    if(!visited[i])
    {
      cnt++;
      DFSUtil(i);
    }
  }
  return cnt;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
      cin>>a>>b;
      g[a].push_back(b);
      g[b].push_back(a);
    }
    cout<<DFS(n)<<"\n";
    return 0;
}