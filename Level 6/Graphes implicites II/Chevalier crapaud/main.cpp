#include <bits/stdc++.h>
#define N 1024
#define M 4
#define P 8
 
using namespace std;
 
inline long long int MAX(long long int a,long long int b){return (a>b)?a:b;}
 
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
int tab[N][N];
int n;
ii s,e;
string t;
ii mov1[M]={{2,0},{-2,0},{0,2},{0,-2}};
ii mov2[P]={{2,1},{-2,1},{2,-1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};
 
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cin>>n;
   cin>>s.first>>s.second;
   cin>>e.first>>e.second;
   for(int i=0;i<n;++i)
   {
      cin>>t;
      for(int j=0;j<n;++j)
      {
         tab[i][j]=(t[j]-'0')-1;
      }
   }
   queue<pair<ii,int> > Q;
   int cnt=0;
   tab[s.first][s.second]=3;
   Q.push(make_pair(s,0));
   while(!Q.empty())
   {
      iii t=Q.front();
      Q.pop();
      int a=t.first.first;
      int b=t.first.second;
      if(a==e.first && b==e.second)
      {
         cout<<t.second<<"\n";
         while(!Q.empty()) Q.pop();
         return 0;
      }
      if(t.second%2==0)
      {
         for(int i=0;i<P;++i)
         {
            int t1=a+mov2[i].first;
            int t2=b+mov2[i].second;
            if(t1>=0 && t2>=0 && t1<n && t2<n && (tab[t1][t2]==0 || tab[t1][t2]==1))
            {
               tab[t1][t2]+=2;
               Q.push(make_pair(ii(t1,t2),t.second+1));
            }
         }
      }
      else
      {
         for(int i=0;i<M;++i)
         {
            int t1=a+mov1[i].first;
            int t2=b+mov1[i].second;
            if(t1>=0 && t2>=0 && t1<n && t2<n &&  (tab[t1][t2]==0 || tab[t1][t2]==2))
            {
               tab[t1][t2]++;
               Q.push(make_pair(ii(t1,t2),t.second+1));
            }
         }
      }
    }    
   cout<<-1<<"\n";
   return 0;
}