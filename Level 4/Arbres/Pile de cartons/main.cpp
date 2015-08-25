#include <bits/stdc++.h>
#define N 100100

using namespace std;
int n,r;
vector<int> v[N];


void Compute(int j)
{
  if(j)
    cout<<"A "<<j<<"\n";
  for(int i=0;i<v[j].size();++i)
  {
    Compute(v[j][i]);
  }
  if(j)
    cout<<"R "<<j<<"\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m,a;
    cin>>n;
    for(int i=0;i<=n;++i)
    {
      cin>>m;
      for(int j=0;j<m;++j)
      {
        cin>>a;
        v[i].push_back(a);
      }
    }
    Compute(0);
    return 0;
}
