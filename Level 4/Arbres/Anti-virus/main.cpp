#include <bits/stdc++.h>
#define N 20100

using namespace std;
int n;
int v[N];
int c[N]={0};
vector<pair<int,int> > ans;
string s;

bool Compare(int n,string s)
{
  int i=0;
  while(n!=0 && i<s.length())
  {
    if(s[i]=='?')
    {
      n/=10;
      i++;
    }
    else if(s[i]-'0'!=n%10)
      return false;
    else
    {
      n/=10;
      i++;
    }
  }
  if(n!=0 || i!=s.length())
    return false;
  return true;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
      cin>>v[i];
    }
    cin>>s;
    reverse(s.begin(),s.end());
    for(int i=1;i<=n;++i)
    {
      if(!c[i])
      {
        int j=i;
        int cnt=0;
        while(j && !c[j])
        {
          cnt++;
          j=v[j];
        }
        cnt+=c[j];
        j=i;
        while(j && !c[j])
        {
          c[j]=cnt--;
          j=v[j];
        }
      }
    }
    for(int i=1;i<=n;++i)
    {
      if(Compare(i,s))
        ans.push_back(make_pair(c[i],i));
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();++i)
      if(i)
        cout<<" "<<ans[i].second;
      else
        cout<<ans[i].second;
    return 0;
}
