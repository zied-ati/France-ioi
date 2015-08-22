#include <bits/stdc++.h>
#define N 10010

using namespace std;
int tab[N];
int n,q;
int type,a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>tab[i];
    cin>>q;
    while(q--)
    {
        cin>>type>>a;
        tab[type]+=a;
    }
    for(int i=1;i<=n-1;++i)
        cout<<tab[i]<<" ";
    cout<<tab[n];
    return 0;
}
