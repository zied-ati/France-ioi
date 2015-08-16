#include <iostream>

using namespace std;

int main()
{
   int n,a;
   int cnt=0;
   cin>>n;
   while(cin>>a && n!=a)
   {
      if(a<n)
         cout<<"c'est plus"<<endl;
      else
         cout<<"c'est moins"<<endl;
      cnt++;
   }
   cout<<"Nombre d'essais nécessaires :"<<endl<<cnt+1<<endl;
   return 0;
}