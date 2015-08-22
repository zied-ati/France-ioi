#include <bits/stdc++.h>
#define N 20100

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
string s;
stack<string> S;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
      int a;
      cin>>a>>s;
      if(a>=0)
      {
         for(int j=0;j<a;++j)
            S.push(s);
      }
      else
      {
         int k=0;
         a=-a;
         while(!S.empty() && k<a)
         {
            k++;
            S.pop();
         }
      }
    }
    s= S.top();
    while(!S.empty())
    {
      string t=S.top();
      if(t<s)
         s=t;
      S.pop();
    }
    cout<<s<<endl;
    return 0;
}
