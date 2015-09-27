#include <bits/stdc++.h>
#define N 22
#define M 10000

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
string s;
int n,p;
map<int,int> m;

int gcd(int a,int b)
{
   while(b!=0)
   {
      int aux=a%b;
      a=b;
      b=aux;
   }
   return a;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int ans=1;
    cin>>n>>p;
    cout<<gcd(n,p)<<endl;
    return 0;
}
