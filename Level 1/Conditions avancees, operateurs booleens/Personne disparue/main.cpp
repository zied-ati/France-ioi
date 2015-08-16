#include <iostream>

using namespace std;

int main()
{
   int n,m,a;
   bool check=false;
   cin>>m>>n;
   for(int i=0;i<n;++i)
   {
      cin>>a;
      if(a==m)
         check=true;
   }
   if(check)
      cout<<"Sorti de la ville"<<endl;
   else
      cout<<"Encore dans la ville"<<endl;
   return 0;
}