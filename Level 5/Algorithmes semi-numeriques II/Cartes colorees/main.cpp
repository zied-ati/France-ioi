#include <bits/stdc++.h>
#define N 102

using namespace std;
inline int MAX(int a,int b){return (a>b)?a:b;}
typedef pair<int,int> ii;
unsigned long long int tab[N][N]={0};
long long int n,p;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>p;
    long long int t=p;
    long long int ans=0;
    while(t<=n)
    {
        ans+=n/t;
        t*=p;
    }
    cout<<ans<<endl;
    return 0;
}
