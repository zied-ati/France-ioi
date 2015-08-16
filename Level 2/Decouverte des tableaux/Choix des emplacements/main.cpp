#include <bits/stdc++.h>
#define N 3072

using namespace std;
int tab[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n;
    for(int i=0;i<n;++i)
      {
         cin>>m;
         tab[m]=i;
      }
      for(int i=0;i<n;++i)
      {
         cout<<tab[i]<<endl;
      }
      return 0;
}