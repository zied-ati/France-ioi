#include <bits/stdc++.h>

using namespace std;
inline int ABS(int a){return (a>0)?a:-a;}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n,m;
   cin>>n>>m;
   cout<<ABS(n-m)<<endl;
   return 0;
}