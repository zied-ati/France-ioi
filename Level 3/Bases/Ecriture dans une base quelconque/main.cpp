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
    cin>>n>>base;
    if(n==0)
    {
        cout<<1<<endl<<0<<endl;
        return 0;
    }
    int cnt=0;
    int i;
    for(i=1;i<=n;i*=base,cnt++);
    cout<<cnt<<endl;
    i/=base;
    int j=0;
    while(i!=0)
    {
        if(!j)
        {
            cout<<n/i;
            ++j;
        }
        else
            cout<<" "<<n/i;
        n%=i;
        i/=base;
    }
    cout<<endl;
    return 0;
}
