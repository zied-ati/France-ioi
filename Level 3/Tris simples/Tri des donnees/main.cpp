#include <bits/stdc++.h>
#define N 10000

using namespace std;
int tab[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
      cin>>tab[i];
    }
    sort(tab,tab+n);
    for(int i=0;i<n;++i)
    {
      if(i)
         cout<<" "<<tab[i];
      else
         cout<<tab[i];
    }
    cout<<endl;
    return 0;
}
