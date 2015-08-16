#include <iostream>

using namespace std;

int main()
{
   int sum=0;
   for(int i=1;i<=17;i+=2)
   {
      sum+=i*i*i;
   }
   cout<<sum<<endl;
}