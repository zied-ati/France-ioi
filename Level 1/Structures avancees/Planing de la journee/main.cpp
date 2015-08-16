#include <iostream>

using namespace std;

int main()
{
   int pos,n,a,ans=0;
   cin>>pos;
   cin>>n;
   for(int i=0;i<n;++i)
   {
      cin>>a;
      if(pos-50<=a && pos+50>=a)
         ans++;
   }
   cout<<ans<<endl;
}