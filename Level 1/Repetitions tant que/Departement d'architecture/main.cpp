#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int sum=0;
   int i;
   for(i=1;sum<=n;++i)
   {
      sum+=i*i;
   }
   i--;
   sum-=i*i;
   cout<<i-1<<endl;
   cout<<sum<<endl;
   return 0;
}