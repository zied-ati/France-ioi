#include <bits/stdc++.h>
#define N 1010
#define M 4
#define T 10100

using namespace std;
typedef pair<int,int> ii;
int tab[N][N];
int n,m;
string s;
int k;
ii dir[M]={{0,1},{0,-1},{1,0},{-1,0}};
int ans[T]={0};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<=n+1;++i)
        for(int j=0;j<=m+1;++j)
            tab[i][j]=-1;
    for(int i=0;i<n;++i)
    {
        cin>>s;
        for(int j=0;j<m;++j)
        {
           if(s[j]=='.')
               tab[i+1][j+1]=0;
        }
    }
    cin>>k;
    queue<ii> Q;
    Q.push(ii(n,m-1));
    tab[n][m-1]=1;
    while(!Q.empty())
    {
        ii p=Q.front();
        Q.pop();
        if(tab[p.first][p.second]<=k)
        {
            for(int i=0;i<M;++i)
            {
               int t1 = p.first+dir[i].first;
               int t2 = p.second+dir[i].second;
                if(tab[t1][t2]==0)
                {
                    tab[t1][t2]=tab[p.first][p.second]+1;
                    Q.push(ii(t1,t2));
                    ans[tab[t1][t2]]++;
                }
            }
        }
    }
    for(int i=2;i<=k+1;++i)
    {
        if(i==2)
            cout<<ans[i];
        else
            cout<<" "<<ans[i];
    }
    return 0;
}
