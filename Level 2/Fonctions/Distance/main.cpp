#include <bits/stdc++.h>
#define N 128

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}

double Distance(double ax,double ay,double bx,double by)
{
   return sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double ax,bx,ay,by;
    cin>>ax>>ay>>bx>>by;
    cout<<Distance(ax,ay,bx,by)<<endl;
    return 0;
}