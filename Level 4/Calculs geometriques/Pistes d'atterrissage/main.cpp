#include <bits/stdc++.h>
#define N 20100
#define EPS 1e-5

using namespace std;
int n;
double ax,bx,ay,by,lx,ly,sum;
double t1,t2;
inline double  MAX(double a,double b){return (a>b)?a:b;}
inline double MIN(double a,double b){return (a<b)?a:b;}
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
    int ansx1,ansy1,ansy2,ansx2;
    P a,b,l;
    cin>>l.x>>l.y;
    cin>>n;
    double minimum=0;
    for(int i=0;i<n;++i)
    {
      cin>>a.x>>a.y>>b.x>>b.y;
      double A = cross(l,a,b);
      double x = Distance(l,a);
      double y = Distance(l,b);
      double z = Distance(a,b);
      double h=ABS(A/z);
      double t1 = sqrt(x*x-h*h);
      double t2 = sqrt(y*y-h*h);
      if(ABS(t1+t2-z)<EPS)
      {
        if(!i || minimum>h)
        {
          minimum=h;
          ansx1=a.x;
          ansy1=a.y;
          ansx2=b.x;
          ansy2=b.y;
        }
      }
      else 
      {
        double t=MIN(x,y);
        if(!i || minimum>t)
        {
          minimum=t;
          ansx1=a.x;
          ansy1=a.y;
          ansx2=b.x;
          ansy2=b.y;
        }
      }
    }
    cout<<ansx1<<" "<<ansy1<<" "<<ansx2<<" "<<ansy2<<endl;
    return 0;
}
