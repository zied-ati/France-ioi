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
    bool ans=true;
    for(int i=0;i<s.length();++i)
    {
      for(int j=0;j<N;++j)
        if(s[i]==in[j])
          lifo.push(j);
      bool found=false;
      int pos=0;
      for(int j=0;j<N;++j)
      { if(s[i]==out[j])
        {
          found=true;
          pos=j;
          break;
        }
      }
      if(found && !lifo.empty() && pos==lifo.top())
      {
        lifo.pop();
      }
      else if(found && (lifo.empty() || pos!=lifo.top()))
      {
        ans=false;
        break;
      }
    }
    if(!lifo.empty())
      ans=false;
    if(ans)
      cout<<"yes\n";
    else
      cout<<"no\n";
    return 0;
}
