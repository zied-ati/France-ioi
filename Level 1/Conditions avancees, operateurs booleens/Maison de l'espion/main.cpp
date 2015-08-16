#include <iostream>

using namespace std;

int main()
{
   int x,y,minx,miny,maxx,maxy,n;
   cin>>minx>>maxx>>miny>>maxy;
   cin>>n;
   int cnt=0;
   for(int i=0;i<n;++i)
   {
      cin>>x>>y;
      if(minx<=x && x<=maxx && miny<=y && y<=maxy)
         cnt++;
   }
   cout<<cnt<<endl;
}