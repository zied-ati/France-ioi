#include <bits/stdc++.h>
#define N 100

using namespace std;
int tab[N][N];
int v[100000]={0};


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
      for(int j=0;j<n;++j)
         cin>>tab[i][j];
    int sum=0;
    for(int i=0;i<n;++i)
      for(int j=0;j<n;++j)
         sum+=tab[i][j];
    if(sum%n!=0)
    {
      cout<<"no"<<endl;
      return 0;
    }
    sum/=n;
    for(int i=0;i<n;++i)
    {
      int s=0;
      for(int j=0;j<n;++j)
      {
         s+=tab[i][j];
      }
      if(s!=sum)
      {
         cout<<"no"<<endl;
         return 0;
      }
    }
    for(int j=0;j<n;++j)
    {
      int s=0;
      for(int i=0;i<n;++i)
         s+=tab[i][j];
         if(s!=sum)
      {
         cout<<"no"<<endl;
         return 0;
      }
    }
    int s1=0,s2=0;
    for(int i=0;i<n;++i)
    {
      s1+=tab[i][i];
      s2+=tab[i][n-i-1];
    }
    if(s1!=sum || s2!=sum)
    {
      cout<<"no"<<endl;
      return 0;
    }
    for(int i=0;i<n;++i)
      for(int j=0;j<n;++j)
         if(tab[i][j]>=1 && tab[i][j]<=n*n)
            v[tab[i][j]]++;
    for(int i=1;i<=n*n;++i)
      if(v[i]!=1)
      {
         cout<<"no"<<endl;
         return 0;
      }
   cout<<"yes"<<endl;
    return 0;

}
