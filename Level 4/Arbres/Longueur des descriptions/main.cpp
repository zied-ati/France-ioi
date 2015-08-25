#include <bits/stdc++.h>
#define N 20100

using namespace std;
int n,r;
int tab[N];
int c[N]={0};


void Compute(int j)
{
  int cnt=1;
  int p=j;
  while(tab[j]!=0 && !c[j])
  {
    j=tab[j];
    if(!c[j])
      cnt++;
  }
  cnt+=c[j];
  int i=cnt;
  while(!c[p] && i>0)
  {
    c[p]=i;
    p=tab[p];
    i--;
  } 
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;++i)
      cin>>tab[i];
    cin>>r;
    int maximum=0;
    for(int i=1;i<=n;++i)
    {
      if(!c[i])
         Compute(i);
      maximum=(maximum>c[i])?maximum:c[i];
    }
    cout<<maximum<<endl;
    return 0;
}
