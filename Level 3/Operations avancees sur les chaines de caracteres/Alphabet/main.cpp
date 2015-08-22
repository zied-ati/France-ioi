#include <bits/stdc++.h>
#define N 26

using namespace std;
string s,t,s1,s2;
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<N;++i)
    {
      if(!i)
         cout<<char(i+'A');
      else
         cout<<" "<<char(i+'A');
    }
    cout<<endl;
    return 0;
}
