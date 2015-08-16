#include <iostream>

using namespace std;

int main()
{
   int number;
   int sum=0;
   for(int i=0;i<20;++i)
   {
      cin>>number;
      sum+=number;
   }
   cout<<sum<<endl;
   return 0;
}