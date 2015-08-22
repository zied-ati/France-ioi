#include <bits/stdc++.h>
#define N 50100

using namespace std;
map<int,int> m;
int n,q,a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a;
        if(!m[a])
            m[a]++;
    }
    cin>>q;
    for(int i=0;i<q;++i)
    {
        cin>>a;
        cout<<m[a]<<"\n";
    }
    return 0;
}
