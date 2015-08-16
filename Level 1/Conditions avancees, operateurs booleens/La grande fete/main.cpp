#include <iostream>

using namespace std;

int main()
{
   int n,x,y,a,b;
   cin>>a>>b;
   cin>>n;
   int cnt=0;
   for(int i=0;i<n;++i)
   {
      cin>>x>>y;
      if(!(y<a) && !(x>b))
         cnt++;
   }
   cout<<cnt<<endl;
}