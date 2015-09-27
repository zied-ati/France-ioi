#include <bits/stdc++.h>
#define N 1024
#define M 12000

using namespace std;
typedef pair<int,int> ii;

int n,m,k;
int a1,b1,a2,b2;
vector<ii> tab;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>k;
    for(int i=0;i<k;++i)
    {
      cin>>a1>>b1>>a2>>b2;
      tab.push_back(ii(a1,b1-b2));
      tab.push_back(ii(a2,b2-b1));
    }
    sort(tab.begin(),tab.end());
    if(tab[0].first>0 || tab[tab.size()-1].first<n)
    {
      cout<<0<<"\n";
    }
    else
    {
      int sum=-tab[0].second;
      int minimum=0x7fffffff;
      for(int i=1;i<tab.size();++i)
      {
        if(minimum>sum && tab[i].first!=tab[i-1].first)
          minimum=sum;
        sum-=tab[i].second;
      }
      cout<<minimum<<"\n";
    }
    return 0;
}