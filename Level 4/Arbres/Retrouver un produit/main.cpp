#include <bits/stdc++.h>
#define N 20100

using namespace std;
int n,r;
int tab[N];


void Compute(int n)
{
  vector<int> v;
  v.push_back(n);
  while(tab[n]!=0)
  {
    v.push_back(tab[n]);
    n=tab[n];
  }
  for(int i=v.size()-1;i>=0;--i)
  {
    if(i==v.size()-1)
      cout<<v[i];
    else
      cout<<" "<<v[i];
  }
  cout<<endl;
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
      int a;
      cin>>a;
      Compute(a);
    }
    return 0;
}
