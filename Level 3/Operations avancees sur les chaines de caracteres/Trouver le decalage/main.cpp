#include <bits/stdc++.h>
#define N 26
#define M 17

using namespace std;
vector<string> v;
string tab[M]={"ce","de","te","parmi","vous","ne","je","me","sur","des","votre","son","les","mes","mon","dans","nous"};
string s;
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,s);
    istringstream iss(s);
    string t;
    int x=0;
    while(iss>>t)
    {
        bool check=true;
         int p[t.length()];
         for(int j=0;j<t.length();++j)
         {
            if(t[j]>='a' && t[j]<='z') 
               p[j]=t[j]-'a';
            else if(t[j]>='A' && t[j]<='Z')
               p[j]=t[j]-'A';
            else
               check=false;
         }
         if(check)
         {
            int i;
            for(i=0;i<M;++i)
            {
               
               if(tab[i].length()==t.length())
               {
                     int k=(tab[i][0]-'a'-p[0])%N;
                     int j;
                     for(j=0;j<tab[i].length();++j)
                     {
                        if(k!=(tab[i][j]-'a'-p[j])%N)
                           break;
                     }
                     if(j==tab[i].length())
                     {
                        x=k;
                        break;
                     }
               }
            }
            if(i<M)
               break;
         }
    }
    for(unsigned int i=0;i<s.length();++i)
    {
      if(s[i]>='a' && s[i]<='z')
      {
         if(x>0)
          cout<<char((s[i]-'a'+x)%N +'a');
        else
         cout<<char((s[i]-'a'+x+N)%N +'a');
      }
      else if(s[i]>='A' && s[i]<='Z')
      {
            if(x>0)
            cout<<char((s[i]-'A'+x)%N +'A');
            else
               cout<<char((s[i]-'A'+x+N)%N +'A');
      }
      else
         cout<<s[i];
    }
    cout<<endl;
    return 0;
}
