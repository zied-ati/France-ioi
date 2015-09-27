#include <bits/stdc++.h>
#define N 1024

using namespace std;
typedef pair<int,int> ii;
inline int MIN(int a,int b){return (a>b)?b:a;}
int n;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cout<<n/2<<" "<<(n-1)/2<<"\n";
    for(int i=1;i<=n/2;++i)
    {
      cout<<i<<" "<<n-i+1<<"\n";
    }
    for(int i=1;i<=(n-1)/2;++i)
    {
      cout<<i<<" "<<n-i<<"\n"; 
    }
    return 0;
}