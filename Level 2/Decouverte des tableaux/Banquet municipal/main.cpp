#include <bits/stdc++.h>
#define N 3072

using namespace std;
int tab[N];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n,m;
   cin>>n>>m;
   for(int i=0;i<n;++i)
         cin>>tab[i];
      for(int i=0;i<m;++i)
      {
         int pos1,pos2;
         cin>>pos1>>pos2;
         swap(tab[pos1],tab[pos2]);
      }
      for(int i=0;i<n;++i)
      {
         cout<<tab[i]<<endl;
      }

   return 0;
}