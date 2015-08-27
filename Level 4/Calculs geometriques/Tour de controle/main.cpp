#include <iostream>
#define N 20100

using namespace std;
int n,a,b,x,y;
int ax,bx,ay,by,sum;
inline int MAX(int a,int b){return (a>b)?a:b;}
inline int MIN(int a,int b){return (a<b)?a:b;}
inline int ABS(int a){return (a>0)?a:-a;}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>ax>>ay;
    cin>>n;
    int ansx,ansy;
    int d=0x7fffffff;
    for(int i=0;i<n;++i)
    {
      cin>>x>>y;
      int da=(x-ax)*(x-ax)+(y-ay)*(y-ay);
      if(d>da)
      {
        d=da;
        ansx=x;
        ansy=y;
      }
    }
    cout<<ansx<<" "<<ansy<<endl;
    return 0;
}
