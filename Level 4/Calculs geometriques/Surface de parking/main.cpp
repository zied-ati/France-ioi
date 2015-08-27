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
    P a,b,c;
    cin>>a.x>>a.y;
    cin>>b.x>>b.y;
    cin>>c.x>>c.y;
    double x= Distance(a,b);
    double y= Distance(c,b);
    double z= Distance(a,c);
    double p=(x+y+z)/2;
    double A=sqrt(p*(p-x)*(p-y)*(p-z));
    cout<<(int)(A*2+0.5)<<endl;
    return 0;
}
