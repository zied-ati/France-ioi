#include <bits/stdc++.h>

using namespace std;
string s;
int n;

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cin>>s;
   cin>>n;
   cout<<s[0]-'A'+1<<(char)('A'+n-1)<<endl;
   return 0;
}
