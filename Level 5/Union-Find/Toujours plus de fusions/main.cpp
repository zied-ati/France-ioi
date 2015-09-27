#include <bits/stdc++.h>
 
using namespace std;

vector<int> C;
int n,m,a,b;

int find(vector <int>& C, int x){return (C[x]==x) ? x : C[x]=find(C, C[x]);} 
int find(int x){return (C[x]==x)?x:C[x]=find(C[x]);}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<=n;++i)
    {
      C.push_back(i);
    }
    for(int i=0;i<m;++i)
    {
      cin>>a>>b;
      int ka=find(a);
      int kb=find(b);
      if(ka!=kb)
      {
        cout<<a<<" "<<b<<"\n";
        C[kb]=ka;
      }
    }
    return 0;
}