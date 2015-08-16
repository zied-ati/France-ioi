#include <bits/stdc++.h>
#define N 128

using namespace std;
string s1,s2,s;
int tab[N]={0};
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>s;
    if(s[0]>='A' && s[0]<='F')
      cout<<1<<endl;
    else if(s[0]>='G' && s[0]<='P')
      cout<<2<<endl;
    else cout<<3<<endl;
    return 0;
}