#include <bits/stdc++.h>

using namespace std;
string s,s1,s2;
map<string,string> m; 
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;++i)
    {
      cin>>s1>>s2;
      m[s2]=s1;
    }
    map<string,string>::iterator it;
    for(it=m.begin();it!=m.end();++it)
      cout<<it->first<<" "<<it->second<<endl;
    m.clear();
    return 0;
}
