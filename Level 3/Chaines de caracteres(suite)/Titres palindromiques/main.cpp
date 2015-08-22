#include <bits/stdc++.h>
#define N 26

using namespace std;
string s;
int tab[N]={0};
int n;
int t;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    getline(cin,s);
    while(t--)
    {
      getline(cin,s);
      int i=0,j=s.length()-1;
      while(i<j)
      {
         if(((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) && s[i]==s[j])
         {
            i++;
            j--;
         }
         else if(s[i]>='a' && s[i]<='z' && s[i]==32+s[j])
         {
            i++;
            j--;
         }
         else if(s[i]>='A' && s[i]<='Z' && s[i]==s[j]-32)
         {
            i++;
            j--;
         }
         else if(!(s[i]>='a' && s[i]<='z') && !(s[i]>='A' && s[i]<='Z'))
            i++;
         else if(!(s[j]>='a' && s[j]<='z') && !(s[j]>='A' && s[j]<='Z'))
            j--;
         else break;
      }
      if(i>=j)
         cout<<s<<endl;

    }
    return 0;
}