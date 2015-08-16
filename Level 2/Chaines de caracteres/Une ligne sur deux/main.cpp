#include <bits/stdc++.h>
#define N 6

using namespace std;
string s;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    getline(cin,s);
    for(int i=1;i<=t;++i)
    {
      getline(cin,s);
      if(i%2==1)
         cout<<s<<endl;
    }
    return 0;
}