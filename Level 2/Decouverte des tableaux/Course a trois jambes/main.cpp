#include <bits/stdc++.h>
#define N 3072

using namespace std;
int tab[N];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin>>n;
   for(int i=0;i<n;++i)
         cin>>tab[i];
   sort(tab,tab+n);
   for(int i=0;i<n/2;++i)
      cout<<tab[i]<<" "<<tab[n-i-1]<<endl;
   return 0;
}