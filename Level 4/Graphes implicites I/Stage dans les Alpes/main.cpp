#include <bits/stdc++.h>
#define N 128

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
int visited[N]={0};
int tab[N]={0};

int n,k;

void Compute(int t,int j) 
{
   if(t==n)
   {
      for(int i=0;i<t;++i)
      {
         if(i)
            cout<<" "<<tab[i];
         else
            cout<<tab[i];
      }
      cout<<"\n";
      return;
   }
   for(int i=j;i<=k;++i)
   {
      tab[t]=i;
      Compute(t+1,i);
   }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>k>>n;
    Compute(0,1);
    return 0;
}
