#include <bits/stdc++.h>
#define N 22
#define M 10000

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
string s;
int n,a;
map<int,int> m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int ans=1;
    for(int i=0;i<n;++i)
    {
        cin>>a;
        ans=(ans*(a%M))%M;
    }
    cout.width(4);
    cout.fill('0');
    cout<<ans<<"\n";
    return 0;
}
