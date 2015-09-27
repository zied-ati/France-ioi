#include <bits/stdc++.h>
#define N 1024
 
using namespace std;
inline int MAX(int a,int b){return (a>b)?a:b;}
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
priority_queue<iii,vector<iii>,greater<iii> > Q;
int n,m;
int a,b,d; 
int vis[N];
vector<int> g[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
      cin>>a>>b>>d;
      Q.push(make_pair(d,ii(a,b)));
    }
    for(int i=1;i<=n;++i)
    {
      vis[i]=i;
      g[i].push_back(i);
    }
    int sum=0;
    while(!Q.empty())
    {
      iii p=Q.top();
      Q.pop();
      ii pp=p.second;
      if(vis[pp.first]!=vis[pp.second])
      {
        int t1=vis[pp.first];
        int t2=vis[pp.second];
        for(int j=0;j<g[t2].size();++j)
        {
          vis[g[t2][j]] = t1;
          g[t1].push_back(g[t2][j]);
        }
        sum+=p.first;
        g[t2].clear();
      }
    }
    cout<<sum<<"\n";
    return 0;
}