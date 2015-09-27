#include <bits/stdc++.h>
#define N 100100
#define M 4

using namespace std;
typedef pair<int,int> ii;
int tab[N];
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;++i)
      cin>>tab[i];
    sort(tab,tab+n);
    for(int i=0;i<n;++i)
      if(!i)
        cout<<tab[i];
      else cout<<" "<<tab[i];
    return 0;
}