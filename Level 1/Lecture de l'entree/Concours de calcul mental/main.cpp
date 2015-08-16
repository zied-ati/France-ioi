#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   long long int ans=66;
   for(int i=1;i<=n;++i)
   {
      ans=ans*i;
      cout<<ans<<endl;
   }
}