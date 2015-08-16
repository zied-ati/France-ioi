#include <bits/stdc++.h>
#define N 3010

using namespace std;
double tab[N];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin>>n;
   for(int i=0;i<n;++i)
         cin>>tab[i];
      double avg=0;
   for(int i=0;i<n;++i)
         avg+=tab[i];
   avg/=n;
   for(int i=0;i<n;++i)
         cout<<avg-tab[i]<<endl;
   return 0;
}