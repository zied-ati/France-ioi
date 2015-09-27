#include <bits/stdc++.h>
#define N 22
#define M 10000

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
string s;
int n,p;
map<int,int> m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int ans=1;
    cin>>n>>p;
    for(int i=1;i<=n;++i)
      ans*=i;
    for(int i=1;i<=p;++i)
      ans/=i;
    for(int i=1;i<=n-p;++i)
      ans/=i;
    cout<<ans<<endl;
    return 0;
}
