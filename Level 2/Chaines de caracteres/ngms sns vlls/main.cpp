#include <bits/stdc++.h>
#define N 128

using namespace std;
string s1,s2,s;
int tab[N]={0};
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    while(getline(cin,s))
    {
      for(int i=0;i<s.length();++i)
      {
         if(!(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'  || s[i]=='Y' || s[i]==' '))
            cout<<s[i];
      }
      cout<<endl;
    }
    return 0;
}