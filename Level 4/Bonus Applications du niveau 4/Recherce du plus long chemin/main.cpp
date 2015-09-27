#include <bits/stdc++.h>
#define N 22
#define M 4

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
string s;
int n,m;
int visited[N][N];
string ans;
pair<int,int> dir[M]={{1,0},{-1,0},{0,1},{0,-1}};
char c[M]={'S','N','E','O'};

void Compute(int i,int j,string s)
{
   if(i==n && j==m-1)
   {
      if(s.length()>ans.length())
         ans=s;
        else if(s.length()==ans.length() && ans>s)
            ans=s;
      return;
   }
   for(int k=0;k<M;++k)
   {
      int p1=i+dir[k].first;
      int p2=j+dir[k].second;
      if(!visited[p1][p2])
      {
         visited[p1][p2]=1;
         Compute(p1,p2,s+c[k]);
         visited[p1][p2]=0;
      }
   }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<=n+1;++i)
      for(int j=0;j<=m+1;++j)
         visited[i][j]=1;
    for(int i=1;i<=n;++i)
    {
      cin>>s;
      for(int j=0;j<m;++j)
      {
         if(s[j]=='.')
            visited[i][j+1]=0;
      }
    }
    ans="";
    Compute(2,1,"");
    cout<<ans.size()<<"\n";
    cout<<ans<<"\n";
    return 0;
}

