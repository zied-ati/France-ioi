#include <bits/stdc++.h>
#define N 20

using namespace std;
int tab[N];
string ans[N];
string v[N];
int n;

int main()
{
   ios_base::sync_with_stdio(0);
   ans[1]="1";
   ans[2]="2\n1";
   v[1]="1";
   v[2]="1\n2\n1";
   cin>>n;
   for(int i=3;i<=n;++i)
   {
      ans[i]="";
      ans[i]=ans[i]+ans[i-2]+"\n";
      if(i/10!=0)
         ans[i]+=('0'+i/10);
      ans[i]+=('0'+i%10);
      ans[i]+="\n";
      ans[i]=ans[i]+v[i-1];
      v[i]=v[i-1]+"\n";
      if(i/10!=0)
         v[i]+=('0'+i/10);
      v[i]+=('0'+i%10);
      v[i]+="\n";
      v[i]=v[i]+v[i-1];
   }
   cout<<ans[n]<<endl;
   return 0;
}