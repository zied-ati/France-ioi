#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int cnt=0;
   int mal=1;
   int malt=1;
   while(n>0)
   {
      n-=mal;
      cnt++;
      mal=malt*2;
      malt+=mal;
   }
   cout<<cnt<<endl;
   return 0;
}