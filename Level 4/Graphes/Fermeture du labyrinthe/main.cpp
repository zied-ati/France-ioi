#include <bits/stdc++.h>
#define N 1024
#define M 12000

using namespace std;
vector<int> g[N];
int visited[N];
int n,m,a,b;
stack<int> s;
int cnt;

bool cycle;

void DFSUtil(int j)
{
  if(++cnt>M || s.size()>n)
  {
    cycle=true;
    return;
  }
  for(int i=0;i<g[j].size();++i)
  {
    if(!visited[g[j][i]] && !cycle)
      DFSUtil(g[j][i]);
  }
  visited[j]=1;
  if(!cycle)
    s.push(j);
}

void DFS()
{
  for(int i=1;i<=n;++i)
  {
    if(!visited[i] && !cycle)
      DFSUtil(i);
  }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cycle=false;
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
      cin>>a>>b;
      g[a].push_back(b);
    }
    cnt=0;
    DFS();
    if(!cycle)
    {
      int i=0;
      while(!s.empty())
      {
        if(i)
          cout<<" "<<s.top();
        else
        {
          i++;
          cout<<s.top();
        }
        s.pop();
      }
    }
    else
      cout<<-1<<endl;
    while(!s.empty()) s.pop();
    return 0;
}