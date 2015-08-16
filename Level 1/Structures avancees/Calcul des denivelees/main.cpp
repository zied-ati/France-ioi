#include <iostream>

using namespace std;

int main()
{
   int n,m=0,d=0,a;
   cin>>n;
   for(int i=0;i<n;++i)
   {
      cin>>a;
      if(a>0)
         m+=a;
      else
         d-=a;
   }
   cout<<m<<endl<<d<<endl;
}