#include <bits/stdc++.h>
#define N 100100
#define M 128

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
int tab[N];
int n,m,a,b;
string s;

void Compute(int k,string t)
{
   if(k==m)
      cout<<t<<"\n";
   else
   {
      for(int i=0;i<n;++i)
      {
         Compute(k+1,t+s[i]);
      }
   }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cin>>s;
    cin>>m;
    int t=1;
    for(int k=0;k<m;++k)
      t*=n;
    cout<<t<<endl;
    Compute(0,"");
    return 0;
}

