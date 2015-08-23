#include <bits/stdc++.h>
#define N 50001
#define M 128

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
int tab[N]={0};

int n,m;
string a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;++i)
      cin>>tab[i];
    sort(tab,tab+n);
    int minimum=0x7fffffff;
    for(int i=1;i<n;++i)
      if(tab[i]-tab[i-1]<minimum)
         minimum=tab[i]-tab[i-1];
    cout<<minimum<<endl;

    return 0;
}

