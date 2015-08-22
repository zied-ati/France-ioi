#include <bits/stdc++.h>
#define N 100001
#define M 128

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
typedef pair<int,int> ii;
set<int> s;
int tab[N];
int n,m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
   for(int i=0;i<n;++i)
      cin>>tab[i];
   cin>>m;
   for(int i=0;i<m;++i)
      cin>>tab[n+i];
   sort(tab,tab+n+m);
   cout<<tab[0];
   for(int i=1;i<n+m;++i)
      cout<<" "<<tab[i];
    return 0;
}
