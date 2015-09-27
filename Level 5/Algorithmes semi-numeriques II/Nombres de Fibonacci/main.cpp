#include <bits/stdc++.h>
#define N 94

using namespace std;
inline int MAX(int a,int b){return (a>b)?a:b;}
typedef pair<int,int> ii;
unsigned long long int fib[N];
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<N;++i)
        fib[i]=fib[i-1]+fib[i-2];
    cin>>n;
    cout<<fib[n]<<"\n";
    return 0;
}
