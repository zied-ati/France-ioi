#include <bits/stdc++.h>
#define N (1<<18)
 
using namespace std;

typedef pair<int,int> ii;

vector<ii> C;

//int find(vector <int>& C, int x){return (C[x]==x) ? x : C[x]=find(C, C[x]);} //C++
int find(int x){return (C[x].first==x)?x:C[x].first=find(C[x].first);}

int n,m,a,v,b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<=n;++i)
      C.push_back(ii(i,1));
    int maximum=1;
    for(int i=0;i<m;++i)
    {
      cin>>a>>b>>v;
      int ka=find(a);
      int kb=find(b);
      if(ka!=kb)
      {
        if(maximum<C[ka].second+C[kb].second)
          maximum=C[ka].second+C[kb].second;
        C[kb].first=ka;
        C[ka].second+=C[kb].second;
      }
      cout<<maximum<<"\n";
    }
    return 0;
}