#include <bits/stdc++.h>
#define N 100
#define M 5

using namespace std;
int tab[N][N];
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;++i)
      for(int j=0;j<n;++j)
         cin>>tab[i][j];
    int ans=0;
      for(int i=0;i<n;++i)
      {
         for(int j=0;j<n;++j)
         {
            if(tab[i][j]==1 || tab[i][j]==2)
            {
               if(i+M<=n)
               {
                  int k=0;
                  for(;k<M;++k)
                  {
                     if(tab[i+k][j]!=tab[i][j])
                        break;
                  }
                  if(k==M)
                     ans=tab[i][j];
               }
               if(j+M<=n)
               {
                  int k=0;
                  for(;k<M;++k)
                  {
                     if(tab[i][j+k]!=tab[i][j])
                        break;
                  }
                  if(k==M)
                     ans=tab[i][j];
               }
               if(i+M<=n && j+M<=n)
               {
                  int k=0;
                  for(;k<M;++k)
                     if(tab[i+k][i+k]!=tab[i][j])
                        break;
                  if(k==M)
                     ans=tab[i][j];
               }
               if(i-M>=-1 && j+M<=n)
               {
                  int k=0;
                  for(;k<M;++k)
                     if(tab[i-k][j+k]!=tab[i][j])
                        break;
                  if(k==M)
                     ans=tab[i][j];
               }
            }
         }
      }
      cout<<ans<<endl;
    return 0;
}
