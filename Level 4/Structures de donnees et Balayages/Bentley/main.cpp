#include <bits/stdc++.h>
#define N 10001
#define M 128

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
set<int> s;
int tab[N];
int n,r,a,b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
   for(int i=0;i<n;++i)
      cin>>tab[i];
   int sum=tab[0];
   int sumaux=0;
   for(int i=0;i<n;++i)
   {
      sumaux=MAX(sumaux+tab[i],tab[i]);
      if(sum<sumaux)
         sum=sumaux;
   }
   if(sum<0)
      sum=0;
   cout<<sum<<endl;
    return 0;
}
