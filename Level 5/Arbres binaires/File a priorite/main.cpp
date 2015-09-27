#include <bits/stdc++.h>
#define M 32
 
using namespace std;
inline int MAX(int a,int b){return (a>b)?a:b;}
typedef pair<int,int> ii;
int n,a;
char type;
priority_queue<int,vector<int>,greater<int> > Q;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;++i)
    {
      cin>>type;
      if(type=='I')
      {
        cin>>a;
        Q.push(a);
      }
      else if(type=='E')
      {
        if(Q.empty())
          cout<<"-\n";
        else
        {
          cout<<Q.top()<<"\n";
          Q.pop();
        }
      }
    }
    return 0;
}