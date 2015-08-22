#include <bits/stdc++.h>

using namespace std;
string s,t,s1,s2;
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int ans=0;
    cin>>s;
    while(cin>>t)
    {
      if(t.length()==s.length())
      {
         int i;
         for(i=0;i<s.length();++i)
            if(t[i]%32!=s[i]%32)
               break;
         if(i==s.length())
            ans++;
      }
    }
    cout<<ans<<endl;
    return 0;
}
