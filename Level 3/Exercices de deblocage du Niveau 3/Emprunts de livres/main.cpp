#include <bits/stdc++.h>
#define N 1024

using namespace std;
int b[N]={0};
int n,m,t;
int l,d;

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cin>>n>>t;
   for(int i=1;i<=t;++i)
   {
      cin>>m;
      for(int j=0;j<m;++j)
      {
         cin>>l>>d;
         if(b[l]<=i)
         {
            cout<<1<<endl;
            b[l]=i+d;
         }
         else
         {
            cout<<0<<endl;
         }
      }
   }
   return 0;
}