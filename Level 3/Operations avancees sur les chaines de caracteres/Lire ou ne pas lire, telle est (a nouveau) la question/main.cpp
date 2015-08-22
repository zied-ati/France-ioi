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
      int j;
      for(j=0;j<v.size();++j)
         if(v[j]>s)
            break;
      if(j==v.size())
      {
         cout<<s<<endl;
         v.push_back(s);
      }
    }
    return 0;
}
