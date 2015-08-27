#include <bits/stdc++.h>
#define N 20100
#define EPS 1e-7

using namespace std;
int n;
double ax,bx,ay,by,lx,ly,sum;
double t1,t2;
inline int MAX(int a,int b){return (a>b)?a:b;}
inline int MIN(int a,int b){return (a<b)?a:b;}
inline double ABS(double a){return (a>0)?a:-a;}

struct P{
  int x;
  int y;
  P (){}
  P (int ax,int ay): x(ax),y(ay) {}
  P (const P &p): x(p.x), y(p.y) {}
  P operator + (const P &p) { return P(p.x+x,p.y+y);}
  P operator - (const P &p) { return P(x-p.x,y-p.y);}
  P operator * (int c) { return P(x*c,y*c);}
  P operator / (int c) { return P(x/c,y/c);}
};

double cross(P l,P a,P b){return (a.x-l.x)*(b.y-l.y)-(a.y-l.y)*(b.x-l.x);}
double Distance(P a,P b){return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));}
double sign(P l,P a,P b){return ((a.x-l.x)*(b.x-l.x)+(a.y-l.y)*(b.y-l.y)>=0)?1.0:-1.0;}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int ansx,ansy;
    P a,b,l;
    cin>>a.x>>a.y>>b.x>>b.y;
    cin>>n;
    double maximum=0;
    double d=Distance(a,b);
    for(int i=0;i<n;++i)
    {
      cin>>l.x>>l.y;
      double A = cross(l,a,b);
      double h=ABS(A/d);
      if(h>maximum)
      {
        maximum=h;
        ansx=l.x;
        ansy=l.y;
      }
    }
    cout<<ansx<<" "<<ansy<<endl;
    return 0;
}
