#include <bits/stdc++.h>
#define N 100100
#define M 26

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
int tab[N];
int visited[M]={0};
int n,m,a,b;
string s;

void Compute(int k,int p)
{
   if(k==m)
   {
      int k=0;
      for(int i=1;i<=n;++i)
      {
         if(k && visited[i])
            cout<<" "<<i;
         else if(!k && visited[i])
         {
            k++;
            cout<<i;
         }
      }
      cout<<endl;
   }
   else if(n-p+1<m-k)
   {
      return;
   }
   else
   {
      for(int i=p;i<=n;++i)
      {
         if(!visited[i])
         {
            visited[i]=1;
            Compute(k+1,i+1);
            visited[i]=0;
         }
      }
   }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cin>>m;
    Compute(0,1);
    return 0;
}

