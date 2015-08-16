#include <bits/stdc++.h>
#define N 128

using namespace std;
string s1,s2,s;
int tab[N]={0};

int main()
{
    ios_base::sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n*m;++i)
    {
      cin>>s;
      tab[s.length()]++;
    }
    for(int i=0;i<N;++i)
    {
      if(tab[i])
         cout<<i<<" : "<<tab[i]<<endl;
    }
    return 0;
}