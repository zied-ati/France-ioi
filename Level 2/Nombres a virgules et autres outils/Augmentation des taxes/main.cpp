#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   double a,b,c;
   cin>>a>>b>>c;
   double d=(c/(a+100))*(100+b);
   cout<<fixed<<setprecision(2)<<d<<endl;
   return 0;
}