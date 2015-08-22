#include <bits/stdc++.h>


using namespace std;
string s;
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2;
    cin>>s1>>s2;
    int a,b;
    a=b=0;
    for(int i=0;i<s1.length();++i)
      a+=s1[i]-'A';
    for(int i=0;i<s2.length();++i)
      b+=s2[i]-'A';
    while(a>=10 || b>=10) 
    {
      int x=0,y=0;
      while(a!=0 || b!=0)
      {
         x+=a%10;
         a/=10;
         y+=b%10;
         b/=10;
      }
      a=x;
      b=y;
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}