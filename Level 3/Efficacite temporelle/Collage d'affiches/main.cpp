#include <bits/stdc++.h>
#define N 1001
#define M 128

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
typedef pair<int,int> ii;
set<int> s;
int n,a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
   char type;
   for(int i=0;i<n;++i)
   {
      cin>>type;
      if(type=='Q')
      {
         cout<<s.size()<<"\n";
      }
      else if(type=='C')
         {
            cin>>a;
            set<int>::iterator it = s.insert(a).first;
            s.erase(s.begin(),it);
      }
   }
    return 0;
}
