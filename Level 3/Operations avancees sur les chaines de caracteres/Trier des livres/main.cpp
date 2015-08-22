#include <bits/stdc++.h>

using namespace std;
string s;
vector<string> v; 
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    getline(cin,s);
    for(int i=0;i<n;++i)
    {
      getline(cin,s);
      v.push_back(s);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;++i)
      cout<<v[i]<<endl;
    return 0;
}