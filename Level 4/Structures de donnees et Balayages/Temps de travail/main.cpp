#include <bits/stdc++.h>
#define N 50001
#define M 128

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
vector<ii> v;

int n,m,a,b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;++i)
    {
      cin>>a>>b;
      if(a>b)
         swap(a,b);
      v.push_back(ii(a,b));
    }
    sort(v.begin(),v.end());
    long long int sum=0;
    long long int minimum=v[0].first;
    long long int maximum=v[0].second;
    for(unsigned int i=0;i<v.size();++i)
    {
      if(v[i].first<=maximum && v[i].second>maximum)
         maximum=v[i].second;
      else if(v[i].first>maximum)
      {
         sum+=maximum-minimum;
         maximum=v[i].second;
         minimum=v[i].first;
      }
    }
    sum+=maximum-minimum;
    cout<<sum<<endl;
    return 0;
}

