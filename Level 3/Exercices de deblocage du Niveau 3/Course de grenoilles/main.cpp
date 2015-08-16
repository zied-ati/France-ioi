#include <bits/stdc++.h>
#define N 100

using namespace std;
int m,n;
int a[N]={0};
int c[N]={0};
int x,d;


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cin>>n>>m;
   int maximum=0;
   int pos=0;
   bool mult=true;
   for(int i=1;i<m;++i)
   {
      cin>>x>>d;
      c[x]+=d;
      if(maximum>c[x] && !mult)
      {
         a[pos]++;
      }
      else if(maximum<c[x])
      {
         maximum=c[x];
         pos=x;
         a[pos]++;
         mult=false;
      }
      else mult=true;
   }
   cin>>x>>d;
   maximum=0;
   pos=1;
   for(int i=1;i<=n;++i)
   {
      if(a[i]>maximum)
      {
         maximum=a[i];
         pos=i;
      }
   }
   cout<<pos<<endl;
   return 0;
}