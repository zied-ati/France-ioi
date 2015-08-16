#include <bits/stdc++.h>
#define N 1024

using namespace std;
int tab[N]={0};

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin>>n;
   for(int i=0;i<n;++i)
         cin>>tab[i];
   sort(tab,tab+n);
   if(n%2==0)
   {
         double res=(double)(tab[n/2-1]+tab[n/2])/2;
         cout<<res<<endl;
   }
   else 
         cout<<tab[n/2]<<endl;
   return 0;
}