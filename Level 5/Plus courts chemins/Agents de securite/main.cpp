#include <bits/stdc++.h>
#define N 512
 
using namespace std;
typedef pair<int, int> ii;
inline int MAX(int a,int b){return (a>b)?a:b;}
int n,m;
int a,b,d; 
int tab[N][N];

queue<int> Q;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;++i)
      for(int j=1;j<=n;++j)
        tab[i][j]=0x3f3f3f3f;
    for(int i=1;i<=n;++i)
      tab[i][i]=0;
    for(int i=0;i<m;++i)
    {
      cin>>a>>b>>d;
      tab[a][b]=d;
      tab[b][a]=d;
    }
    for(int k=1;k<=n;++k)
    {
      for(int i=1;i<=n;++i)
      {
        for(int j=1;j<=n;++j)
        {
          if(tab[i][j]>tab[i][k]+tab[k][j])
            tab[i][j]=tab[i][k]+tab[k][j];
        }
      }
    }
    for(int i=1;i<=n;++i)
    {
      cout<<tab[i][1];
      for(int j=2;j<=n;++j)
        cout<<" "<<tab[i][j];
      cout<<"\n";
    }
    return 0;
}