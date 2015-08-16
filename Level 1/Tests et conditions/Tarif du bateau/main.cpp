#include <iostream>

using namespace std;

int main()
{
   int age;
   cin>>age;
   if(age<21)
      cout<<"Tarif réduit"<<endl;
   else cout<<"Tarif plein"<<endl;
   return 0;
}