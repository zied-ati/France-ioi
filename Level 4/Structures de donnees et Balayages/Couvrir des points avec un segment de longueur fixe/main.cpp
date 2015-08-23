#include <bits/stdc++.h>
#define N 100100
#define M 128

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
int tab[N];
int n,m,a,b,s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>m>>n;
    for(int i=0;i<n;++i)
    {
      cin>>tab[i];
      }
      sort(tab,tab+n);
      int i=0,j=0,ans=0;
      for(;j<n;++j)
      {
         while(tab[j]-tab[i]>m)
            i++;
         if(ans<j-i+1)
            ans=j-i+1;
      }
    cout<<ans<<endl;
    return 0;
}

