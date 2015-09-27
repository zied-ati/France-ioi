#include <bits/stdc++.h>
#define N 100100
#define M 26

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
string s;
int n,m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    int cnt=0;
    for(int i=0;i<n;++i)
    {
      cin>>s;
      for(int j=0;j<m;++j)
         if(s[j]=='#')
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

