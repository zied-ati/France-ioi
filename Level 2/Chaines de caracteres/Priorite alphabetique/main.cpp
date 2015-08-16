#include <bits/stdc++.h>
#define N 6

using namespace std;
string s1,s2;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,s1);
    getline(cin,s2);
    if(s1>s2)
      cout<<s2<<endl;
    else if(s2>s1) cout<<s1<<endl;
      return 0;
}