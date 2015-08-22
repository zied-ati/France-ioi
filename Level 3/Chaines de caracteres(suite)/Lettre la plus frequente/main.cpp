#include <bits/stdc++.h>
#define N 26

using namespace std;
string s;
int tab[N]={0};
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,s);
    for(int i=0;i<s.length();++i)
    {
      if(s[i]>='a' && s[i]<='z')
         tab[s[i]-'a']++;
      else if(s[i]>='A' && s[i]<='Z')
         tab[s[i]-'A']++;
    }
    int maximum=0;
    int ch=0;
    for(int i=0;i<N;++i)
    {
      if(tab[i]>maximum)
      {
         maximum=tab[i];
         ch=i;
      }
    }
    cout<<char(ch+'A')<<endl;
    return 0;
}