#include <bits/stdc++.h>
#define N 256

using namespace std;
string tab[N];
string c[N];
int t,n,m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    cin>>n>>m;
    for(int i=0;i<n;++i)
      cin>>tab[i];
    for(int k=0;k<t;++k)
    {
      for(int i=0;i<n;++i)
         c[i]=tab[i];
      for(int i=0;i<n;++i)
      {
         for(int j=0;j<m;++j)
         {
            if(i>=1 && j>=1 && i<n-1 && j<m-1 && tab[i][j]=='#')
            {
               if(tab[i-1][j]!='#' || tab[i+1][j]!='#' || tab[i][j-1]!='#' || tab[i][j+1] !='#')
                  c[i][j]='.';
            }
            else
               c[i][j]='.';
         }
      }
      for(int i=0;i<n;++i)
         tab[i]=c[i];
    }
    for(int i=0;i<n;++i)
      cout<<tab[i]<<endl;
    return 0;
}
