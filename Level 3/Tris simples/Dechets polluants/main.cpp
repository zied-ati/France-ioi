#include <bits/stdc++.h>
#define N 10000

using namespace std;
int tab[N];
int t,n,m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;++i)
      cin>>tab[i];
    sort(tab,tab+n);
    for(int j=0;j<m;++j)
    {
      if(!j)
         cout<<tab[n-1-j];
      else
         cout<<" "<<tab[n-1-j];
    }
    cout<<endl;
    return 0;
}
