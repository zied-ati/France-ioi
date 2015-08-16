#include <iostream>

using namespace std;

int main()
{
   for(int i=1;i<=40;++i)
   {
      for(int j=1;j<=40;++j)
      {
         if((i+j)%2==0)
            cout<<'O';
         else cout<<'X';
      }
      cout<<endl;
   }
}