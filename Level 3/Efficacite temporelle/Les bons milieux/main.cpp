#include <bits/stdc++.h>
#define N 1001
#define M 128

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
typedef pair<int,int> ii;
ii v[N];
int n,x,y;
int tab[M][M]={0};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>v[i].first>>v[i].second;
    }
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            int p1=v[i].first+v[j].first;
            int p2=v[i].second+v[j].second;
            if(p1%2==0 && p2%2==0)
            {
                tab[p1/2][p2/2]++;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<n;++i)
    {
        if(tab[v[i].first][v[i].second])
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
