#include <bits/stdc++.h>
#define N 1024
#define M 4

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
vector<int> g[N];
int visited[N];
string s;
int n,a;
int b,c,d;

int DFSUtil(int i,int cnt)
{
   visited[i]=1;
   cnt++;
   for(int j=0;j<g[i].size();++j)
      if(!visited[g[i][j]])
         cnt+=DFSUtil(g[i][j],0);
   return cnt;
}

ii DFS(int n)
{
   int ans=0;
   int maximum=0;
   for(int i=1;i<=n;++i)
   {
      if(!visited[i])
      {
         ans++;
         int cnt=DFSUtil(i,0);
         maximum=MAX(maximum,cnt);
      }
   }
   return ii(ans,maximum);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>a;
    for(int i=0;i<a;++i)
    {
      cin>>b>>c>>d;
      g[b].push_back(c);
      g[c].push_back(b);
    }
    ii p=DFS(n);
    cout<<p.first<<" "<<p.second<<"\n";
    return 0;
}

