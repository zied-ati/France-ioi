#include <bits/stdc++.h>
#define N 20100

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
int tab[N];
int n,q,a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int i;
    for(i=0;(1<<i)<=n;++i);
    cout<<(1<<(i-1))<<"\n";
    return 0;
}
