#include <bits/stdc++.h>
#define N 10

using namespace std;
int tab[N]={9, 5, 12, 15, 7, 42, 13, 10, 1,20};

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int a;
   int sum=0;
   for(int i=0;i<N;++i)
   {
         cin>>a;
         sum+=tab[i]*a;
   }
   cout<<sum<<endl;
   return 0;
}