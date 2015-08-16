#include <bits/stdc++.h>
#define N 128

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin>>a;
    for(int i=1;i<10;++i)
    {
      cin>>b;
      a=MIN(a,b);
    }
    cout<<a<<endl;
    return 0;
}