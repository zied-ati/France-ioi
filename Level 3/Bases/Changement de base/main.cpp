#include <bits/stdc++.h>
#define N 20100

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
string s;
long long int n,q,a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int base1,base2,c;
    cin>>base1>>base2>>c;
    n=0;
    for(int i=0;i<c;++i)
    {
        cin>>a;
        n=n*base1+a;
    }
    if(n==0)
    {
        cout<<0<<endl;
        return 0;
    }
    long long int i;
    for(i=1;i<=n;i*=base2);
    i/=base2;
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
        i/=base2;
    }
    cout<<endl;
    return 0;
}
