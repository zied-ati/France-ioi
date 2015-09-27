#include <bits/stdc++.h>
#define N 21

using namespace std;
unsigned long long int tab[N][N]={0};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,p;
    cin>>n>>p;
    unsigned long long int ans=1;
    for(int i=1;i<N;++i)
    {
      tab[0][i]=1;
      tab[1][i]=i;
      tab[i][1]=1;
    }
    for(int i=2;i<N;++i)
    {
      for(int j=2;j<N;++j)
      {
        for(int k=0;k<=i;++k)
        {
          tab[i][j]+=tab[i-k][j-1];
        }
      }
    }
    cout<<tab[p][n]<<"\n";
    return 0;
}