#include <iostream>

using namespace std;

int main()
{
   int n,x,y;
   cin>>n;
   for(int i=0;i<n;++i)
   {
      cin>>x>>y;
      if((x>=10 && x<=85 && y>=10 && y<=55) && !(x>=25 && x<=50 && y>=20 && y<=45))
         cout<<"Dans une zone bleue"<<endl;
      else if((x>=15 && x<=45 && y>=60 && y<=70) || (x>=60 && x<=85 && y>=60 && y<=70))
         cout<<"Dans une zone rouge"<<endl;
      else if((x<0) || (x>90) || (y<0) || (y>70))
         cout<<"En dehors de la feuille"<<endl;
      else
         cout<<"Dans une zone jaune"<<endl;
   }
   return 0;
}