#include <iostream>

using namespace std;

int main()
{
   int maximum,minimum;
   cin>>maximum>>minimum;
   int sum=0;
   for(int i=minimum;i<=maximum;++i)
      sum+=i*i;
   cout<<sum<<endl;
   return 0;
}