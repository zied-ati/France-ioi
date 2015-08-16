#include <bits/stdc++.h>
#define N 128

using namespace std;
string s1,s2,s;
int tab[N]={0};
int n;

void show(char c,int n,int m)
{
   for(int i=0;i<n;++i)
   {
      for(int j=0;j<m;++j)
         cout<<c;
      cout<<endl;
   }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    show('X',4,10);
    show('O',6,5);
    return 0;
}