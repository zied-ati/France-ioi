#include <bits/stdc++.h>

using namespace std;
string s1,s2,s;

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    getline(cin,s);
    int maximum=0;
    for(int i=1;i<=n;++i)
    {
      getline(cin,s);
      if(s.length()>maximum)
      {
         cout<<s<<endl;
         maximum=s.length();
      }
    }
    return 0;
}