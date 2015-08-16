#include <iostream>

using namespace std;

int main()
{
   int n,x,y,minx,miny,maxx,maxy;
   cin>>n;
   cin>>x>>y;
   minx=maxx=x;
   miny=maxy=y;
   for(int i=1;i<n;++i)
   {
      cin>>x>>y;
      minx=(minx>x)?x:minx;
      miny=(miny>y)?y:miny;
      maxx=(maxx<x)?x:maxx;
      maxy=(maxy<y)?y:maxy;
   }
   cout<<((maxx-minx)+(maxy-miny))*2<<endl;
}