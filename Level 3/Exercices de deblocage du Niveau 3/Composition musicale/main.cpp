#include <bits/stdc++.h>
#define N 1024

using namespace std;
int n;
inline int MIN(int a,int b){return (a>b)?b:a;}
string s;

void Compute()
{
   int l=s.length();
   string t="";
   bool check=false;
   for(int i=0;i<l;)
   {
      if(s[i]==s[i+1])
      {
         i+=2;
         check=true;
      }
      else
      {
         t+=s[i++];
      }
   }
   s=t;
   if(check)
      Compute();
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cin>>s;
   Compute();
   cout<<s<<endl;
   return 0;
}