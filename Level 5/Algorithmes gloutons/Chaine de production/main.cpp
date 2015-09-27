#include <bits/stdc++.h>
#define M 32
  
using namespace std;
inline int MAX(int a,int b){return (a>b)?a:b;}
typedef pair<int,int> ii;
int n,m,a,b;
priority_queue<ii,vector<ii>,greater<ii> > Q;
vector<int> tab1;
vector<int> tab2;
int m1[M];
int m2[M];
int c[M]={0};
  
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cin>>m;
    for(int i=0;i<m;++i)
    {
        cin>>m1[i];
    }
    int ans=0;
    for(int j=0;j<n;++j)
    {
      int pos=0;
      int minimum=c[pos]+m1[pos];
      for(int i=0;i<m;++i)
      {
        if(c[i]+m1[i]<minimum)
        {
          pos=i;
          minimum = c[i]+m1[i];
        }
      }
      c[pos]+=m1[pos];
      tab1.push_back(c[pos]);
    }
    sort(tab1.begin(),tab1.end());
    cout<<tab1[n-1]<<"\n";
    while(!Q.empty()) Q.pop();
    cin>>m;
    for(int i=0;i<m;++i)
    {
      cin>>m2[i];
      c[i]=0;
    }
    for(int j=0;j<n;++j)
    {
      int pos=0;
      int minimum=c[pos]+m2[pos];
      for(int i=0;i<m;++i)
      {
        if(c[i]+m2[i]<minimum)
        {
          pos=i;
          minimum = c[i]+m2[i];
        }
      }
      c[pos]+=m2[pos];
      tab2.push_back(c[pos]);
    }
    sort(tab2.begin(),tab2.end());
    int maximum=0;
    for(int i=0;i<n;++i)
    {
        maximum=MAX(maximum,tab1[i]+tab2[n-i-1]);
    }
    cout<<maximum<<"\n";
    while(!Q.empty()) Q.pop();
    return 0;
}