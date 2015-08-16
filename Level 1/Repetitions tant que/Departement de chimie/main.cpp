#include <iostream>

using namespace std;

int main()
{
   int n,x,y,a;
   cin>>n>>x>>y;
   int cnt=0;
   while(cnt<n && cin>>a && a>=x && a<=y)
   {
      cout<<"Rien à signaler"<<endl;
      cnt++;
   }
   if(cnt<n)
      cout<<"Alerte !!"<<endl;
   return 0;
}