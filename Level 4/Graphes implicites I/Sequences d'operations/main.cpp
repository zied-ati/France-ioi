#include <bits/stdc++.h>
#define N 100100

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
int visited[N]={0};


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int e,s;
    cin>>e>>s;
    queue<int> Q;
    Q.push(e);
    visited[e]=1;
    while(!Q.empty())
    {
      int f=Q.front();
      Q.pop();
      if(f==s)
         break;
      if(f+a<N && !visited[f+a])
      {
         visited[f+a]=1;
         Q.push(f+a);
      }
      if(f-b>=0 && !visited[f-b])
      {
         visited[f-b]=1;
         Q.push(f-b);
      }
      if(f*c<N && !visited[f*c])
      {
         visited[f*c]=1;
         Q.push(f*c);
      }
      if(d!=0 && f%d==0 && !visited[f/d])
      {
         visited[f/d]=1;
         Q.push(f/d);
      }
    }
   while(!Q.empty()) Q.pop();
   cout<<visited[s]<<endl;
    return 0;
}

