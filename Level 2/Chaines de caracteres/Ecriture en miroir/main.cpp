#include <bits/stdc++.h>
#define N 128

using namespace std;
string s1,s2,s;
int tab[N]={0};

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    getline(cin,s);
    for(int i=0;i<n;++i)
    {
      getline(cin,s);
         for(int j=0;j<s.length();++j)
            cout<<s[s.length()-1-j];
         cout<<endl;
      }
    return 0;
}