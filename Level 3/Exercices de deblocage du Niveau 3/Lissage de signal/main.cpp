#include <bits/stdc++.h>
#define N 128
#define M 2

using namespace std;
int n;
double m[M][N];
double dif;
double ABS(double a){return (a>0)?a:-a;}

void Lissage()
{
   for(int i=1;i<n-1;++i)
      m[1][i]=(m[0][i-1]+m[0][i+1])/2;
   for(int i=1;i<n-1;++i)
      m[0][i]=m[1][i];
}

bool Check()
{
   for(int i=1;i<n;++i)
   {
      if(ABS(m[0][i]-m[0][i-1])>dif)
         return true;
   }
   return false;
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cin>>n;
   cin>>dif;
   for(int i=0;i<n;++i)
      cin>>m[0][i];
   int ans=0;
   while(Check())
   {
      ans++;
      Lisage();
   }
   cout<<ans<<endl;
   return 0;
}