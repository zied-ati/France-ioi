#include <bits/stdc++.h>
#define N 26

using namespace std;
string s;
int tab[N]={0};
int n;
int t;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,s);
    int cnt=0;
    for(int i=0;i<s.length();++i)
    {
      if(s[i]>='a' && s[i]<='z')
      {
         tab[s[i]-'a']++;
         cnt++;
      }
      else if(s[i]>='A' && s[i]<='Z')
      {
         tab[s[i]-'A']++;
         cnt++;
      }
    }
    for(int i=0;i<N;++i)
    {
      cout<<double(tab[i])/cnt<<endl;
    }
    return 0;
}