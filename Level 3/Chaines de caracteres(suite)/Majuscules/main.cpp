#include <bits/stdc++.h>


using namespace std;
string s;
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,s);
    for(int i=0;i<s.length();++i)
      if(s[i]>='a' && s[i]<='z')
         cout<<char(s[i]-32);
      else cout<<s[i];
      cout<<endl;
    return 0;
}