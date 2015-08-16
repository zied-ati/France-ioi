#include <bits/stdc++.h>
#define N 128

using namespace std;
string s1,s2,s;
int tab[N]={0};
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char c;
    cin>>c;
      cin>>n;
      getline(cin,s);
      int cnt=0;
      for(int i=0;i<n;++i)
      {
         getline(cin,s);
         for(int j=0;j<s.length();++j)
            if(s[j]==c)
               cnt++;
      } 
      cout<<cnt<<endl;
    return 0;
}