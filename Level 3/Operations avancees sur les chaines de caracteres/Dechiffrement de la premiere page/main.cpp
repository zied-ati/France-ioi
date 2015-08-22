#include <bits/stdc++.h>
#define N 26

using namespace std;
string s,t,s1,s2;
int n;
int tab[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,s);
    for(unsigned int i=0;i<s.length();++i)
    {
      tab[i]=s[i]-'a';
    }
    getline(cin,t);
    for(unsigned int i=0;i<t.length();++i)
    {
      if(t[i]>='a' && t[i]<='z')
         cout<<char(tab[t[i]-'a']+'a');
      else if(t[i]>='A' && t[i]<='Z')
         cout<<char(tab[t[i]-'A']+'A');
      else
         cout<<t[i];
    }
    cout<<endl;
    return 0;
}
