#include <bits/stdc++.h>
#define N 100200
#define M 128

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
iii v[N];
int ans[N];
int s[M]={0};

int n,m,a,b,r;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>r>>n;
    for(int i=0;i<n;++i)
    {
      cin>>a>>b;
      v[i].first.first=a;
      v[i].first.second=b;
      v[i].second=i+1;
    }
    sort(v,v+n);
    bool problem=false;
    for(int i=0;i<n;++i)
    {
      int j=1;
      for(j=1;j<=r;++j)
      {
         if(v[i].first.first>=s[j])
         {
            s[j]=v[i].first.second;
            ans[v[i].second]=j;
            break;
         }
      }
      if(j>r)
      {
         problem=true;
         break;
      }
    }
    if(problem)
       cout<<"NON"<<endl;
    else
    {
       cout<<"OUI"<<endl;
       cout<<ans[1];
       for(int i=2;i<=n;++i)
         cout<<" "<<ans[i];
    }
    return 0;
}
