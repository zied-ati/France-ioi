#include <bits/stdc++.h>
#define N 128
 
using namespace std;

int tab[N][N];
int sum[N][N]={0};
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;++i)
      for(int j=1;j<=i;++j)
        cin>>tab[i][j];
    sum[1][1]=tab[1][1];
    for(int i=1;i<=n-1;++i)
    {
      for(int j=1;j<=i;++j)
      {
        if(sum[i+1][j]<tab[i+1][j]+sum[i][j])
          sum[i+1][j]=tab[i+1][j]+sum[i][j];
        if(sum[i+1][j+1]<tab[i+1][j+1]+sum[i][j])
          sum[i+1][j+1]=tab[i+1][j+1]+sum[i][j];
      }
    }
    int ans=0;
    for(int i=1;i<=n;++i)
    {
      ans=(ans>sum[n][i])?ans:sum[n][i];
    }
    cout<<ans<<"\n";
    return 0;
}