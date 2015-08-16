#include <bits/stdc++.h>
#define N 6

using namespace std;
string s1,s2,s;

int main()
{
    ios_base::sync_with_stdio(0);
    int t,n;
    cin>>t;
    cin>>n;
    getline(cin,s);
    for(int i=1;i<=t;++i)
    {
      getline(cin,s1);
      getline(cin,s2);
      if(s2.length()<n)
         cout<<s1<<endl;
    }
    return 0;
}