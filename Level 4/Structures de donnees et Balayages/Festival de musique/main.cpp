#include <bits/stdc++.h>
#define N 100001
#define M 128

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
int tab[N];
int group[N]={0};

int n,d,o,t;
string a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>d;
    for(int i=0;i<n;++i)
      cin>>tab[i];
    int prev=0,cntmin=n,cnt=0;
    for(int i=0;i<n;++i)
    {
      if(group[tab[i]]==0)
         cnt++;
      group[tab[i]]++;
      if(cnt==d)
      {
         while(group[tab[prev]]>1)
         {
            group[tab[prev]]--;
            prev++;
         }
         if(cntmin>i-prev+1)
            cntmin=i-prev+1;
      }
    }
    cout<<cntmin<<endl;
    return 0;
}
