#include <bits/stdc++.h>
#define N 200

using namespace std;
char table[N][N];


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,q;
    cin>>n>>m;
    for(int i=0;i<n;++i)
      for(int j=0;j<m;++j)
         table[i][j]='.';
      cin>>q;
      while(q--)
      {
         char type;
         int ax,ay,bx,by;
         cin>>ax>>ay>>bx>>by>>type;
         for(int i=ax;i<=bx;++i)
            for(int j=ay;j<=by;++j)
               table[i][j]=type;
      }
      for(int i=0;i<n;++i)
      {
         for(int j=0;j<m;++j)
            cout<<table[i][j];
         cout<<endl;
      }

    return 0;
}
