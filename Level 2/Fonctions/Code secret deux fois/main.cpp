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
    int t=0;
    while(1)
    {
      cout<<"Entrez le code :"<<endl;
      cin>>n;
      if(n==4242 && t==0)
      {
         cout<<"Encore une fois."<<endl;
         t++;
      }
      else if(n==4242 && t)
      {
         cout<<"Bravo."<<endl;
         break;
      }
    }

      cout<<endl;
    return 0;
}