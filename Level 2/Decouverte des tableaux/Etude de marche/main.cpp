#include <bits/stdc++.h>
#define N 1024

using namespace std;
int tab[N]={0};

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n,m;
   cin>>n>>m;
   for(int i=0;i<m;++i)
         cin>>tab[i];
   for(int i=0;i<n;++i)
   {
         int cnt=0;
         for(int j=0;j<m;++j)
            if(tab[j]==i)
               cnt++;
         cout<<cnt<<endl;
   }
   return 0;
}