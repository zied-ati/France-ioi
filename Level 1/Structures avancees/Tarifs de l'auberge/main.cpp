#include <iostream>

using namespace std;

int main()
{
   int a,p;
   cin>>a>>p;
   if(a==60)
      cout<<0<<endl;
   else if(a<10)
      cout<<5<<endl;
   else if(p>=20)
      cout<<40<<endl;
   else
      cout<<30<<endl;
}