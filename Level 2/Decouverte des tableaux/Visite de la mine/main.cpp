#include <bits/stdc++.h>
#define N 10240

using namespace std;
int tab[N]={0};

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
   for(int i=n-1;i>=0;--i)
   {
         if(tab[i]==5)
            cout<<4<<endl;
         else if(tab[i]==4)
            cout<<5<<endl;
         else if(tab[i]==2)
            cout<<1<<endl;
         else if(tab[i]==1)
            cout<<2<<endl;
         else cout<<tab[i]<<endl;
   }
   return 0;
}