#include <bits/stdc++.h>
#define N 100001
#define M 128

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
int tab[N];

int n,d,o,t;
string a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>d;
    for(int i=0;i<n;++i)
      cin>>tab[i];
    int prev=0,sum=0,cntmax=0;
    for(int i=0;i<n;++i)
    {
      sum+=tab[i];
      while(sum>d)
      {
         sum-=tab[prev++];
      }
      if(i-prev+1>cntmax)
         cntmax=i-prev+1;
    }
    cout<<cntmax<<endl;
    return 0;
}
