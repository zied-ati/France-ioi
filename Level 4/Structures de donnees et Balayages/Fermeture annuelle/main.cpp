#include <bits/stdc++.h>
#define N 100001
#define M 128

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
vector<ii> tab;
int n,m,a,b,s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>s>>n;
    for(int i=0;i<n;++i)
    {
      cin>>a>>b;
      if(a<b)
         tab.push_back(make_pair(a,b));
      else
      {
         tab.push_back(make_pair(a,s));
         tab.push_back(make_pair(0,b));
      }
      }
    sort(tab.begin(),tab.end());
    int ans=tab[0].first;
    int maximum=tab[0].second;
    for(unsigned int i=0;i<tab.size();++i)
    {
      if(tab[i].first<=maximum && tab[i].second>=maximum)
         maximum=tab[i].second;
      else if(tab[i].first>maximum)
      {
         if(ans<tab[i].first-maximum)
            ans=tab[i].first-maximum;
         maximum=tab[i].second;
      }
    }
    if(ans<s+tab[0].first-maximum)
       ans=s+tab[0].first-maximum;
    cout<<ans<<endl;
    return 0;
}

