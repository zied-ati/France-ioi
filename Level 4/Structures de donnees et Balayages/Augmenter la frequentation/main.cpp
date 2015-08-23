#include <bits/stdc++.h>
#define N 50001
#define M 128

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
vector<ii> v;

int n,m,a,b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;++i)
    {
      cin>>a>>b;
      v.push_back(ii(a,b));
    }
    sort(v.begin(),v.end());
    double avgmax=0;
    int sum=0;
    int ans=0;
    for(int i=0;i<n;++i)
    {
      sum+=v[i].second;
      if(avgmax<=(double)sum/(i+1))
      {
         avgmax=(double)sum/(i+1);
         ans=v[i].first;
      }
    }
    cout<<ans<<endl;
    return 0;
}
