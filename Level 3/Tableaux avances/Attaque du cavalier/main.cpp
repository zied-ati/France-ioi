#include <bits/stdc++.h>
#define N 8

using namespace std;
string tab[N];
int x[8]={2,2,-2,-2,1,-1,1,-1};
int y[8]={1,-1,1,-1,2,2,-2,-2};


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<N;++i)
    {
      cin>>tab[i];
    }
    bool ans=false;
    for(int i=0;i<N;++i)
    {
      for(int j=0;j<N;j++)
      if(tab[i][j]=='C')
      {
         for(int k=0;k<N;++k)
         {
            if(i+x[k]>=0 && i+x[k]<N && j+y[k]>=0 && j+y[k]<N)
            {
               if(tab[i+x[k]][j+y[k]]>='a' && tab[i+x[k]][j+y[k]]<='z')
                  ans=true;
            }
         }
      }
    }
    if(ans)
      cout<<"yes"<<endl;
    else
      cout<<"no"<<endl;
}
