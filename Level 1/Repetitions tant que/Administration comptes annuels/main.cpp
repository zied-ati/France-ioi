#include <iostream>

using namespace std;

int main()
{
   int sum=0;
   int n;
   while(cin>>n && n!=-1)
      sum+=n;
   cout<<sum<<endl;
   return 0;
}