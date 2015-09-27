#include <bits/stdc++.h>
#define N 10010
#define M 4

using namespace std;
typedef pair<int,int> ii;
int tab[N];
int vis[N]={0};
vector<int> ans[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
      cin>>tab[i];
    }
    for(int i=1;i<=n;++i)
    {
      if(tab[i]!=i && !vis[i])
      {
        int t=tab[i];
        vis[i]=1;
        ans[cnt].push_back(t);
        int j=tab[i];
        while(j!=i)
        {
          vis[j]=1;
          ans[cnt].push_back(tab[j]);
          j=tab[j];
        }
        cnt++;
      }
      else if(tab[i]==i)
      {
        vis[i]=1;
        ans[cnt].push_back(i);
        cnt++;
      }

    }
    cout<<cnt<<"\n";
    for(int i=0;i<cnt;++i)
    {
      for(int j=0;j<ans[i].size();++j)
        if(!j)
          cout<<ans[i][j];
        else
          cout<<" "<<ans[i][j];
      cout<<"\n";
    }
    return 0;
}