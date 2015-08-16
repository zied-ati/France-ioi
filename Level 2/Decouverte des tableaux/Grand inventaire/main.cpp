#include <bits/stdc++.h>
#define N 10

using namespace std;
int tab[N]={0};

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n;
   int a,d;
   cin>>n;
   for(int i=0;i<n;++i)
   {
         cin>>a>>d;
         tab[a-1]+=d;
   }
   for(int i=0;i<N;++i)
         cout<<tab[i]<<endl;
   return 0;
}