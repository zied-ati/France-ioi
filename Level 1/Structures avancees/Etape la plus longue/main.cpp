#include <iostream>

using namespace std;

int main()
{
   int n,d,maximum=0;
   cin>>n;
   for(int i=0;i<n;++i)
   {
      cin>>d;
      maximum=(d>maximum)?d:maximum;
   }
   cout<<maximum<<endl;
   return 0;
}