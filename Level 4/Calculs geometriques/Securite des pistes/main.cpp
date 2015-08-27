#include <bits/stdc++.h>
#define N 20100
#define EPS 1e-7

using namespace std;
int n;
double ax,bx,ay,by,lx,ly,sum;
double t1,t2;
inline double  MAX(double a,double b){return (a>b)?a:b;}
inline double MIN(double a,double b){return (a<b)?a:b;}
inline double ABS(double a){return (a>0)?a:-a;}

struct P{
  double x;
  double y;
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
    P a1,b1,a2,b2;
    double x,y;
    cin>>a1.x>>a1.y>>b1.x>>b1.y;
    cin>>a2.x>>a2.y>>b2.x>>b2.y;
    double a=0,b=0,c=0,d=0;
    if(a1.y!=b1.y)
    {
       a=(b1.x-a1.x)/(a1.y-b1.y);
       b=-a*b1.y-b1.x;
    }
    else
    {
       a=0;
       b=0;
    }   
    if(a2.y!=b2.y)
    {
       c=(b2.x-a2.x)/(a2.y-b2.y);
       d=-c*b2.y-b2.x;
    }
    else
    {
       c=0;
       d=0;
    }
    if(a==0 && b==0)
    {
      y=b1.y;
      x=-y*c-d;
    }
    else if(c==0 && d==0)
    {
      y=b2.y;
      x=-y*a-b;
    }
    else
    {
      x=0,y=0;
      if(ABS(d-b)>EPS)
       y=(d-b)/(a-c);
       x=-y*a-b;
     }
    cout<<fixed<<setprecision(6)<<x<<" "<<y<<endl;
    return 0;
}