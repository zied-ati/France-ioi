#include <bits/stdc++.h>
#define N 22
#define M 4

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
int visited[N][N];
string s;
int n,m;
ii dir[M]={{1,0},{0,1},{-1,0},{0,-1}};
int cnt;

void Compute(int i,int j) 
{
   if(i==n && j==m-1)
   {
      cnt++;
      return;
   }
   for(int k=0;k<M;++k)
   {
      int t1=i+dir[k].first;
      int t2=j+dir[k].second;
      if(!visited[t1][t2])
      {
         visited[t1][t2]=1;
         Compute(t1,t2);
         visited[t1][t2]=0;
      }
   }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<=n+1;i++)
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
    cnt=0;
    Compute(1,2);
    cout<<cnt<<"\n";
    return 0;
}
