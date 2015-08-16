#include <iostream>

using namespace std;

int main()
{
   int d1,d2;
   cin>>d1>>d2;
   int sum=d1+d2;
   if(sum>=10)
      cout<<"Taxe spéciale !"<<endl<<36<<endl;
   else
      cout<<"Taxe régulière"<<endl<<(sum<<1)<<endl;
   return 0;
}