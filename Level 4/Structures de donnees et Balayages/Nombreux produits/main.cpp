#include <bits/stdc++.h>
#define N 20001
#define M 128

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
queue<string> q[N];

int n,d,o,t;
string a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t>>n;
   for(int i=0;i<n;++i)
   {
      cin>>d>>o>>a;
      if(o>=0)
      {
         for(int i=0;i<o;++i)
            q[d].push(a);
      }
      else
      {
         o=-o;
         for(int i=0;i<o;++i)
            if(!q[d].empty())
               q[d].pop();
      }
   }
   for(int i=1;i<=t;++i)
   {
      if(q[i].empty())
      {
         cout<<"0"<<endl;
      }
      else
      {
         string s=q[i].front();
         while(!q[i].empty())
         {
            string x=q[i].front();
            q[i].pop();
            if(x<s)
               s=x;
         }
         cout<<s<<"\n";
      }
   }
    return 0;
}