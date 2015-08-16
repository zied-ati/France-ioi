#include <bits/stdc++.h>
#define N 1024

using namespace std;
int n;
inline int MIN(int a,int b){return (a>b)?b:a;}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cin>>n;
   for(int i=1;i<=2*n-1;++i)
   {
      for(int j=1;j<=2*n-1;++j)
      {
         int x=MIN(2*n-i,i);
         int y=MIN(2*n-j,j);
         x=MIN(x,y);
         cout<<(char)('a'+x-1);
      }
      cout<<endl;
   }
   return 0;
}