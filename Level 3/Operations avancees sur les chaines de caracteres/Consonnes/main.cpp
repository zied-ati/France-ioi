#include <bits/stdc++.h>
#define N 26

using namespace std;
string s,t,s1,s2;
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int j=0;
    for(int i=0;i<N;++i)
    {
      if((i+'a'!='a') && (i+'a'!='e') && (i+'a'!='u') && (i+'a'!='i') && (i+'a'!='o') && (i+'a'!='y')) 
      if(!j)
      {
         cout<<char(i+'a');
         j++;
      }
      else
         cout<<" "<<char(i+'a');
    }
    cout<<endl;
    return 0;
}
