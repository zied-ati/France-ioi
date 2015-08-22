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
    if(n==0)
    {
        cout<<0<<endl;
        return 0;
    }
    string ans="";
    for(i=0;(1<<i)<=n;++i)
        if((1<<i)&n)
            ans+='1';
        else
            ans+='0';
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}
