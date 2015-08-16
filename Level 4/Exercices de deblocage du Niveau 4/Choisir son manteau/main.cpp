#include <bits/stdc++.h>
#define N 20010

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
int n;
map<int,pair<int,int> > m;
map<int,pair<int,int> > started;
map<int,pair<int,int> > ended; 
vector<pair<int,int> > v;
int a,b;

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cin>>n;
   for(int i=0;i<n;++i)
   {
      cin>>a>>b;
      v.push_back(make_pair(a,b));
   }
   for(int i=0;i<v.size();++i)
   {
      started[v[i].first].first++;
      ended[v[i].second].first++;
   }
   map<int,pair<int,int> >::iterator it;
   int sum=0;
   for(it=started.begin();it!=started.end();++it)
   {
      it->second.second=sum;
      sum+=it->second.first;
      it->second.first=sum;
   }
   sum=0;
   for(it=ended.begin();it!=ended.end();++it)
   {
      it->second.second=sum;
      sum+=it->second.first;
      it->second.first=sum;
   }
   int maximum=1;
   for(int i=0;i<v.size();++i)
   {
      map<int,pair<int,int> >::iterator it1,it2,it3;
      it1=started.find(v[i].first);
      it2=ended.find(v[i].second);
      it3=ended.find(v[i].first);
      int a=it2->second.first-it3->second.second - it1->second.second;
      if(a>maximum)
         maximum=a;
   }
   cout<<maximum-1<<endl;
   return 0;
}