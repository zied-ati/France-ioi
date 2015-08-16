#include <iostream>

using namespace std;
int ax,ay,bx,by;
int cx,cy,dx,dy;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      cin>>ax>>bx>>ay>>by;
      cin>>cx>>dx>>cy>>dy;
      if(ax>=dx || cx>=bx || ay>=dy || cy>=by)
         cout<<"NON"<<endl;
      else
         cout<<"OUI"<<endl;
   }
   return 0;
}