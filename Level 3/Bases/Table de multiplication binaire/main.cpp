#include <bits/stdc++.h>
#define N 20100

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
string s;
long long int n,q,a;

string Binary(int n)
{
    if(n==0)
    {
        return "0";
    }
    string ret="";
    for(int i=0;(1<<i)<=n;++i)
    {
        if((1<<i)&n)
            ret+='1';
        else ret+='0';
    }
    reverse(ret.begin(),ret.end());
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
        for(int j=1;j<=t;++j)
        {
            if(j!=t)
                cout<<Binary(i*j)<<"\t";
            else
                cout<<Binary(i*j);
        }
        cout<<endl;
    }
    return 0;
}
