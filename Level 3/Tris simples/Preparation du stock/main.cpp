#include <bits/stdc++.h>
#define N 10000

using namespace std;
int tab[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,a;
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
      cin>>tab[i];
    }
    for(int j=0;j<m;++j)
    {
      cin>>a;
      tab[n++]=a;
      int i=0;
      for(i=0;i<n;++i)
      {
         if(tab[i]>tab[n-1])
            swap(tab[i],tab[n-1]);
      }  
      for(int i=0;i<n;++i)
      {
         if(tab[i]==a)
         {
            if(j)
               cout<<" "<<i;
            else 
               cout<<i;
            break;
         }
      }
    }
    cout<<endl;
    for(int i=0;i<n;++i)
    {
      if(i)
         cout<<" "<<tab[i];
      else
         cout<<tab[i];
    }
    cout<<endl;
    return 0;
}
