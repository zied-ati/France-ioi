#include <iostream>
#define N (1<<18)
 
using namespace std;

//int find(vector <int>& C, int x){return (C[x]==x) ? x : C[x]=find(C, C[x]);} //C++
//int find(int x){return (C[x]==x)?x:C[x]=find(C[x]);}

int arb[N]={0};
int n,m,a,b,v;
char type;

void update(int node,int l,int r,int a,int b,int val)
{
  if(a<=l && r<=b)
  {
    arb[node]+=val;
  }
  else
  {
    int mid=(l+r)/2;
    if(a<=mid)
      update(node*2,l,mid,a,b,val);
    if(b>mid)
      update(2*node+1,mid+1,r,a,b,val);
  }
} 

int search(int node,int l,int r,int a)
{
  if(a==l && a==r)
  {
    return arb[node];
  }
  else
  {
    int mid=(l+r)/2;
    int cur=arb[node];
    if(a<=mid)
      cur+=search(2*node,l,mid,a);
    else 
      cur+=search(2*node+1,mid+1,r,a);
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
    for(int i=0;i<m;++i)
    {
      cin>>type;
      if(type=='D')
      {
        cin>>a>>b>>v;
        update(1,1,n,a+1,b+1,v);
      }
      else if(type=='V')
      {
        cin>>a;
        cout<<search(1,1,n,a+1)<<"\n";
      }
    }
    return 0;
}