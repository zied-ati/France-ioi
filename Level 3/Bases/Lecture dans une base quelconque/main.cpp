#include <bits/stdc++.h>
#define N 20100

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
string s;
int n,q,a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int base,n;
    cin>>base>>n;
    int p=1;
    for(int i=0;i<n-1;++i)
        p*=base;
    int ans=0;
    for(int i=0;i<n;++i)
    {
        cin>>a;
        ans+=p*a;
        p/=base;
    }
    cout<<ans<<endl;
    return 0;
}
