#include <iostream>

using namespace std;

int main()
{
   for(int j=0;j<3;++j)
   {
      for(int i=0;i<30;++i)
         cout<<(char)('a'+j)<<'_';
      cout<<endl;
   }
}