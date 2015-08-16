#include <bits/stdc++.h>
#define N 128

using namespace std;
string s1,s2,s;
int tab[N]={0};
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,s1);
    getline(cin,s2);
    int t=0;
    int i;
    int n;
    if(s1.length()<s2.length())
      n=s1.length();
    else n=s2.length();
    for(i=0;i<n;)
    {
      if(s1[i]==s2[i])
      {
         t++;
         ++i;
      }
      else 
         break;
    }
    if(s1==s2)
      cout<<"="<<endl<<s1.length()<<endl;
    else if(t==n && s1.length()>n)
      cout<<"1"<<endl<<t<<endl;
    else if(t==n && s2.length()>n)
      cout<<"2"<<endl<<t<<endl;
    else if(s1[i]>s2[i])
      cout<<"2"<<endl<<t<<endl;
    else
      cout<<"1"<<endl<<t<<endl;

    return 0;
}