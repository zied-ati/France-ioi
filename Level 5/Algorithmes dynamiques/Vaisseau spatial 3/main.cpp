#include <bits/stdc++.h>
#define N 20020 
using namespace std;

inline int MIN(int a,int b){return (a>b)?b:a;}
inline int MAX(int a,int b){return (a<b)?b:a;}
inline int ABS(int a){return (a>0)?a:-a;}
typedef pair<int,int> ii;
vector<ii> tab;
int sum[N]={0};
int vis[N]={0};
int n,m,s,a,b;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>m>>s;
  for(int i=0;i<n-1;++i)
  {
    cin>>a>>b;
    tab.push_back(ii(a,b));
  }
  tab.push_back(ii(s,0));
  reverse(tab.begin(),tab.end());
  vis[0]=1;
  for(int i=0;i<n;++i)
  {
    if(vis[i])
    {
      for(int j=1;j<=m;++j)
      {
        if((i+j)<n && ABS(tab[i+j].first-tab[i].first)<=j)
        {
          sum[i+j]=MAX(sum[i+j],sum[i]+tab[i+j].second);
          vis[i+j]=1;
        }
      }
    }
  }
  int ans=0;
  for(int i=0;i<n;++i)
  {
    ans=MAX(ans,sum[i]);
  }
  cout<<ans<<"\n";
  return 0;
}