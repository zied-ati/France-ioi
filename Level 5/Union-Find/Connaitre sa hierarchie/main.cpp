#include <bits/stdc++.h>
#define N 1024
 
using namespace std;

int n,m,a,b;
int pre[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
      pre[i]=i;
    }
    for(int i=0;i<m;++i)
    {
      cin>>a>>b;
      if(a==b)
      {
        cout<<b;
        while(b!=pre[b])
        {
          cout<<" "<<pre[b];
          b=pre[b];
        }
        cout<<"\n";
      }
      else
      {
        int ka=a;
        int kb=b;
        while(ka!=pre[ka]) ka=pre[ka];
        while(kb!=pre[kb]) kb=pre[kb];
        if(ka!=kb)
          pre[kb]=ka;
      }
    }
    return 0;
}