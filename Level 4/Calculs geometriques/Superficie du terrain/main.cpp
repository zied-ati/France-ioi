#include <iostream>
#define N 20100

using namespace std;
int n,a1,a2,b1,b2;
int ax,bx,ay,by,sum;
inline int MAX(int a,int b){return (a>b)?a:b;}
inline int MIN(int a,int b){return (a<b)?a:b;}

void Compute()
{
  int minx,maxx,miny,maxy;
  maxx=MAX(a1,ax);
  minx=MIN(a2,bx);
  maxy=MAX(b1,ay);
  miny=MIN(b2,by);
  if(maxx<=bx && minx>=ax && maxy<=by && miny>=ay)
    sum-=(maxx-minx)*(maxy-miny);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>ax>>ay>>bx>>by;
    sum=(ax-bx)*(ay-by);
    cin>>n;
    for(int i=0;i<n;++i)
    {
      cin>>a1>>b1>>a2>>b2;
      Compute();
    }
    cout<<sum<<endl;
    return 0;
}
