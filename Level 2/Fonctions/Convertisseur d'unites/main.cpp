#include <bits/stdc++.h>
#define N 128

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}

double Pied(double m)
{
   return m/0.3048;
}

double Gramme(double g)
{
   return g*0.002205;
}

double Fahren(double t)
{
   return (32.0+(1.8*t));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    double a;
    char t;
    for(int i=0;i<n;++i)
    {
      cin>>a>>t;
      if(t=='m')
      {
         cout<<Pied(a)<<" p"<<endl;
      }
      else if(t=='g')
      {
         cout<<Gramme(a)<<" l"<<endl;
      }
      else if(t=='c')
      {
         cout<<Fahren(a)<<" f"<<endl;
      }
    }
    return 0;
}