#include <bits/stdc++.h>
#define N 100001
#define M 128

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
typedef pair<int,int> ii;
set<int> s;
int tab[N];
int n,r,a,b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>r;
   for(int i=1;i<=n;++i)
      cin>>tab[i];
   tab[0]=0;
   for(int i=1;i<=n;++i)
      tab[i]+=tab[i-1];
   while(r--)
   {
      cin>>a>>b;
      cout<<tab[b]-tab[a-1]<<"\n";
   }
    return 0;
}
