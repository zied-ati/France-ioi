#include <iostream>

using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   if(n-m>10)
      cout<<"La famille Arignon a un champ trop grand"<<endl;
   else if(m-n>10)
      cout<<"La famille Evaran a un champ trop grand"<<endl;
}