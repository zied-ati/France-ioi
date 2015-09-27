#include <bits/stdc++.h>
#define N 10010
#define M 4

using namespace std;
typedef pair<int,int> ii;
int tab[N];
int pos[N];
vector<ii> ans;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
      cin>>tab[i];
      pos[tab[i]]=i;
    }
    for(int i=1;i<=n;++i)
    {
      if(tab[i]!=i)
      {
        ans.push_back(ii(i,pos[i]));
        pos[tab[i]]=pos[i];
        tab[pos[i]]=tab[i];
        tab[i]=i;
        pos[i]=i;
      }
    }
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();++i)
      cout<<ans[i].first<<" "<<ans[i].second<<"\n";
    return 0;
}