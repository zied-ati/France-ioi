#include <iostream>

using namespace std;

int main()
{
   int minimum,maximum,n,a;
   cin>>minimum>>maximum;
   cin>>n;
   int ans=0;
   for(int i=0;i<n;++i)
   {
      cin>>a;
      if(a>=minimum && a<=maximum)
         ans++;
   }
   cout<<ans<<endl;
}