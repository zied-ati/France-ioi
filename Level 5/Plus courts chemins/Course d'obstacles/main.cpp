#include <bits/stdc++.h>
#define N 1024
#define DIR 4
 
using namespace std;
typedef pair<int,int> ii;
inline int MAX(int a,int b){return (a>b)?a:b;}
int n,m;
int a,b,d; 
int tab[N][N];
int dis[N][N];
string s;
ii dir[DIR]={{1,0},{-1,0},{0,1},{0,-1}};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<=n+1;++i)
    {
      for(int j=0;j<=m+1;++j)
      {
        tab[i][j]=-1;
        dis[i][j]=0x7fffffff;
      }
    }
    for(int i=0;i<n;++i)
    {
      cin>>s;
      for(int j=0;j<s.length();++j)
        if(s[j]=='.')
          tab[i+1][j+1]=0;
        else if(s[j]>='0' && s[j]<='9')
          tab[i+1][j+1]=s[j]-'0';
    }
    queue<ii> Q;
    Q.push(ii(2,1));
    dis[Q.front().first][Q.front().second]=0;
    while(!Q.empty())
    {
      ii p=Q.front();
      Q.pop();
      for(int i=0;i<DIR;++i)
      {
        int t1=p.first+dir[i].first;
        int t2=p.second+dir[i].second;
        if(tab[t1][t2]!=-1 && dis[t1][t2]>tab[t1][t2]+dis[p.first][p.second])
        {
          Q.push(ii(t1,t2));
          dis[t1][t2] = tab[t1][t2]+dis[p.first][p.second];
        }
      }
    }
    cout<<dis[n][m-1]<<"\n";
    return 0;
}