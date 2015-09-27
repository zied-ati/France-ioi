#include <bits/stdc++.h>
#define N 2001
#define M 51
#define INF 0x3f3f3f3f
#define DIR 3 
using namespace std;

typedef pair<int,int> ii;

int tab[N][M];
ii  sum[N][M];
int n,m,s;
int dir[DIR]={-1,0,1};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>s;
    n--;
    for(int i=n;i>=0;--i)
      for(int j=0;j<m;++j)
        cin>>tab[i][j];
    for(int i=0;i<=n;++i)
    {
      for(int j=0;j<=m;++j)
      {
        sum[i][j].first=-INF;
        sum[i][j].second=0;
      }
    }
    for(int i=0;i<DIR;++i)
    {
      if(s+dir[i]>=0 && s+dir[i]<m)
      {
        sum[1][s+dir[i]].first=tab[1][s+dir[i]];
        sum[1][s+dir[i]].second=-i;
      }
    }
    for(int i=1;i<=n-1;++i)
    {
      for(int j=0;j<m;++j)
      {
        if(sum[i][j].first!=-INF)
        {
          for(int k=0;k<DIR;++k)
          {
            if(j+dir[k]>=0 && j+dir[k]<m)
            {
              if(sum[i+1][j+dir[k]].first<sum[i][j].first+tab[i+1][j+dir[k]])
              {
                sum[i+1][j+dir[k]].first=sum[i][j].first+tab[i+1][j+dir[k]];
                sum[i+1][j+dir[k]].second=-k;
              }
            }
          }
        }
      }
    } 
    int ans=-INF;
    for(int i=0;i<m;++i)
    {
      ans=(ans>sum[n][i].first)?ans:sum[n][i].first;
    }
    cout<<ans<<"\n";
    return 0;
}