#include <bits/stdc++.h>
#define N 128

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    for(int i=0;i<a;++i)
      cout<<'X';
    cout<<endl<<endl;
    for(int i=0;i<b;++i)
    {
      for(int j=0;j<c;++j)
      {
         if(i==0 || j==0 ||i==b-1 ||j==c-1)
            cout<<"#";
         else
            cout<<" ";
      }
      cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<d;++i)
    {
      for(int j=0;j<=i;++j)
      {
         if(j==0 || j==i || i==d-1)
            cout<<"@";
         else cout<<" ";
      }
      cout<<endl;
    }
    return 0;
}