#include <bits/stdc++.h>
#define N 4

using namespace std;
string s;
stack<int> lifo;
char in[N]={'(','[','{','<'};
char out[N]={')',']','}','>'};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,s);
    int cnt=0;
    for(int i=0;i<s.length();++i)
    {
      if(s[i]=='}')
        cnt--;
      for(int j=0;j<cnt;++j)
        cout<<"   ";
      cout<<s[i]<<endl;
      if(s[i]=='{')
        cnt++;
    }
    return 0;
}
