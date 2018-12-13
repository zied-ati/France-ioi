#include <iostream>

using namespace std;

int main()
{
   int n,a;
   int sum1=0,sum2=0;
   cin>>n;
   for(int i=0;i<2*n;++i)
   {
      cin>>a;
      if(i%2==0)
         sum1+=a;
      else
         sum2+=a;
   }
   if(sum1>sum2)
      cout<<"L'équipe 1 a un avantage"<<endl;
   else
      cout<<"L'équipe 2 a un avantage"<<endl;     
   cout<<"Poids total pour l'équipe 1 : "<<sum1<<endl;
   cout<<"Poids total pour l'équipe 2 : "<<sum2<<endl;
   return 0;  
}