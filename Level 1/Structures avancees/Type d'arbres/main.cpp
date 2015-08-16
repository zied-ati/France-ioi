#include <iostream>

using namespace std;

int main()
{
   int t,f;
   cin>>t>>f;
   if(t<=5 && f>=8)
      cout<<"Tinuviel"<<endl;
   else if(t>=10 && f>=10)
      cout<<"Calaelen"<<endl;
   else if(t<=8 && f<=5)
      cout<<"Falarion"<<endl;
   else if(t>=12 && f<=7)
      cout<<"Dorthonion"<<endl;
}