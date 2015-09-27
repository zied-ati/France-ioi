#include <bits/stdc++.h>
#define N 100010
#define M 18

using namespace std;
typedef pair<int,int> ii;
inline int MAX(int a,int b){return (a>b)?a:b;}
set<ii,greater<ii> > s;
int n,r;
int a,b;
int tab[N][M]={0};


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>tab[i][0];
    }
    for(int i=1;(1<<i)<=n;++i)
    {
        for(int j=1;j<=n-(1<<i)+1;++j)
        {
            tab[j][i]=MAX(tab[j][i-1],tab[j+(1<<(i-1))][i-1]);
        }
    }
    cin>>r;
    for(int j=0;j<r;++j)
    {
        cin>>a>>b;
        int i=0;
        for(;(1<<i)<=(b-a+1);++i);
        cout<<MAX(tab[a][i-1],tab[b-(1<<(i-1))+1][i-1])<<"\n";
    }
    return 0;
}
