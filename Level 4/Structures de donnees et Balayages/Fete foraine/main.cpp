#include <bits/stdc++.h>
#define N 100001
#define M 128

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
int cible[N]={0};
int lots[N]={0};

int n,m;
string a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;++i)
      cin>>cible[i];
    cin>>m;
    for(int i=0;i<m;++i)
      cin>>lots[i];
    int i,j;
    for(i=0,j=0;i<n;++i)
    {
       while(j+1<m && lots[j+1]<=cible[i])
         j++;
      if(i)
         cout<<" "<<lots[j];
      else
         cout<<lots[j];
    }
    return 0;
}
