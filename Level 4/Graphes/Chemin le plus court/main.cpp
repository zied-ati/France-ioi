#include <bits/stdc++.h>
#define N 1024
#define M 4

using namespace std;
typedef pair<int,int> ii;
int tab[N][N];
ii  pr[N][N];
int n,m;
string s;
ii dir[M]={{0,1},{-1,0},{0,-1},{1,0}};
char c[M]={'E','N','O','S'};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<=n+1;++i)
      for(int j=0;j<=m+1;++j)
        tab[i][j]=-1;
    for(int i=1;i<=n;++i)
    {
      cin>>s;
      for(int j=0;j<m;++j)
      {
        if(s[j]=='.')
          tab[i][j+1]=0;
      }
    }
    queue<ii> Q;
    Q.push(ii(2,1));
    tab[2][1]=1;
    while(!Q.empty())
    {
      ii p=Q.front();
      Q.pop();
      for(int i=0;i<M;++i)
      {
        int t1 = p.first+dir[i].first;
        int t2 = p.second+dir[i].second;
        if(tab[t1][t2]==0)
        {
          tab[t1][t2]=tab[p.first][p.second]+1;
          pr[t1][t2]=p;
          if(t1==n && t2==m-1)
          {
            while(!Q.empty()) Q.pop();
            break;
          }
          Q.push(ii(t1,t2));
        }
      }
    }
    string s="";
    ii e(2,1);
    ii t(n,m-1);
    while(t!=e)
    {
      int i;
      ii p=pr[t.first][t.second];
      int t1 = t.first-p.first;
      int t2= t.second-p.second;
      for(int i=0;i<M;++i)
      {
         if(t1==dir[i].first && t2==dir[i].second)
         {
            s+=c[i];
            break;
         }
      }
      t=p;
    }
    reverse(s.begin(),s.end());
    cout<<s.size()<<"\n";
    cout<<s<<"\n";
    return 0;
}