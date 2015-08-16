#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   double a;
   int w=60;
   int p=45;
   cin>>a;
   if(a==(int)a && (int)a % w==0)
   {
        cout<<(int)(a/w)*p<<endl;
   }
   else
      cout<<(int)(a/w+1)*p<<endl;
   return 0;
}