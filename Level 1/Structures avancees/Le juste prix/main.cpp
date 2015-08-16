#include <iostream>

using namespace std;

int main()
{
   int n,pos,a,minimum;
   cin>>n;
   cin>>minimum;
   pos=1;
   for(int i=2;i<=n;++i)
   {
      cin>>a;
      if(minimum>=a)
      {
         minimum=a;
         pos=i;
      }
   }
   cout<<pos<<endl;
}