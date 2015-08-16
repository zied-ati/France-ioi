#include <iostream>

using namespace std;

int main()
{
   int n,a;
   int ans=0;
   cin>>n;
   for(int i=0;i<n;++i)
   {
      cin>>a;
      if(a>10000)
         ans++;
   }
   cout<<ans<<endl;
   return 0;
}