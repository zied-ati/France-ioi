#include <iostream>
#define N (1<<18)
 
using namespace std;

//int find(vector <int>& C, int x){return (C[x]==x) ? x : C[x]=find(C, C[x]);} //C++
//int find(int x){return (C[x]==x)?x:C[x]=find(C[x]);}
typedef pair<int,int> ii;

ii arb[N]={{0,0}};
int n,m,a,b,v;
char type;

void update(int node,int l,int r,int a,int b,int val,int p)
{
  if(a<=l && r<=b)
  {
    arb[node].first=val;
    arb[node].second=p;
  }
  else
  {
    int mid=(l+r)/2;
    if(a<=mid)
      update(node*2,l,mid,a,b,val,p);
    if(b>mid)
      update(2*node+1,mid+1,r,a,b,val,p);
  }
} 

pair<int,int> search(int node,int l,int r,int a)
{
  if(a==l && a==r)
  {
    return arb[node];
  }
  else
  {
    int mid=(l+r)/2;
    ii cur;
    if(a<=mid)
      cur=search(2*node,l,mid,a);
    else 
      cur=search(2*node+1,mid+1,r,a);
    if(cur.second<arb[node].second)
      return arb[node];
    else 
      return cur;
  }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    n=(1<<n);
    cin>>m;
    int p=0;
    for(int i=0;i<m;++i)
    {
      cin>>type;
      if(type=='M')
      {
        cin>>a>>b>>v;
        update(1,1,n,a+1,b+1,v,++p);
      }
      else if(type=='V')
      {
        cin>>a;
        cout<<search(1,1,n,a+1).first<<"\n";
      }
    }
    return 0;
}