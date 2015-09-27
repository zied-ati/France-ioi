#include <bits/stdc++.h>
#define N 1000001

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
string s;
int n,p;
int tab[N]={0};


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cout<<0<<endl;
    cout<<1<<endl;
    cout<<2<<endl;
    for(int i=3;i<=n;i+=2)
    {
        if(!tab[i])
        {
            cout<<i<<"\n";
            int p=i+i;
            for(int j=i+p;j<=n;j+=p)
                tab[j]=1;
        }
    }
    return 0;
}

