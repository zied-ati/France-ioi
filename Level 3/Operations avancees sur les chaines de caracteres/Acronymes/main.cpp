#include <bits/stdc++.h>

using namespace std;
string s,t,s1,s2;
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int ans=0;
    getline(cin,s);
    getline(cin,t);
    istringstream iss(t);
    iss>>n;
    while(n--)
    {
      getline(cin,t);
      bool space=true;
      int i,j=0;
      for(i=0;i<t.length();++i)
      {
        if(space && (j==s.length() || t[i]%32!=s[j]%32))
         {
            break;
         }
         else if(space && t[i]%32==s[j]%32)
         {
            j++;
            space=false;
         }
         else if(t[i]==' ')
            space=true;
      }
      if(j==s.length() && i==t.length())
      {
         space=true;
         for(int k=0;k<t.length();++k)
         {
            if(space)
            {
               cout<<char((t[k]-'A')%32+'A');
               space=false;
            }
            else if(t[k]==' ')
            {
               space=true;
               cout<<t[k];
            }
            else
            {
               cout<<char((t[k]-'A')%32+'a');
            }
         }
         cout<<endl;
      }
    }
    return 0;
}
