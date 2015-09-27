#include <bits/stdc++.h>
#define N 102

using namespace std;
inline int MAX(int a,int b){return (a>b)?a:b;}
typedef pair<int,int> ii;
unsigned long long int tab[N][N]={0};
int n,p;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i=1;i<N;++i)
    {
        tab[i][0]=1;
        tab[i][1]=i;
    }
    for(int i=2;i<N;++i)
    {
        for(int j=2;j<N;++j)
        {
            tab[i][j]=tab[i-1][j]+tab[i-1][j-1];
        }
    }
    cin>>n>>p;
    cout<<tab[n][p]<<"\n";
    return 0;
}
