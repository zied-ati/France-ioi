#include <bits/stdc++.h>
#define N 20100

using namespace std;
int n,r;
int tab[N];


int Compute(int n,int p)
{
  vector<int> v1,v2;
  v1.push_back(n);
  while(tab[n]!=0)
  {
    v1.push_back(tab[n]);
    n=tab[n];
  }
  v2.push_back(p);
  while(tab[p]!=0)
  {
    v2.push_back(tab[p]);
    p=tab[p];
  }
  int ans=0;
  for(int i=v1.size()-1,j=v2.size()-1;i>=0 && j>=0;--i,--j)
  {
    if(v1[i]==v2[j])
      ans=v1[i];
    else
      break;
  }
  return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;++i)
      cin>>tab[i];
    cin>>r;
    while(r--)
    {
      int a,b;
      cin>>a>>b;
      cout<<Compute(a,b)<<endl;
    }
    return 0;
}
