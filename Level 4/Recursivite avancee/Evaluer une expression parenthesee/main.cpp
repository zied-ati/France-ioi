#include <bits/stdc++.h>
#define N 4

using namespace std;
string s;
int i,p;

int Compute();

int Number()
{
  int n=0;
  while(i<s.length())
  {
    if(s[i]>='0' && s[i]<='9')
    {
      n=(n<<1)+(n<<3)+s[i]-'0';
      ++i;
    }
    else
      break;
  }
  if(i<s.length() && s[i]=='*')
  {
    if(s[i+1]=='(')
    {
      i+=2;
      n*=Compute();
    }
    else
    {
      i++;
      n*=Number();
    }
  }
  else if(i<s.length() && s[i]=='/')
  {
    if( s[i+1]=='(')
    {
      i+=2;
      n/=Compute();
    }
    else
    {
      i++;
      n/=Number();
    }
  }
  else if(i<s.length() && s[i]=='%')
  {
    if(s[i+1]=='(')
    {
      i+=2;
      n%=Compute();
    }
    else
    {
      ++i;
      n%=Number();
    }
  }
  return n;
}

int Compute()
{
    int n=0;
    while(i<s.length())
    {
      if(s[i]=='(')
      {
        if(i>0 && s[i-1]=='+')
        {
          i++;
          n+=Compute();
        }
        else if(i>0 && s[i-1]=='*')
        {
          i++;
          n*=Compute();
        }
        else if(i>0 && s[i-1]=='-')
        {
          ++i;
          n-=Compute();
        }
        else if(i>0 && s[i-1]=='/')
        {
          ++i;
          n/=Compute();
        }
        else if(i>0 && s[i-1]=='%')
        {
          ++i;
          n%=Compute();
        }
        else 
        {
          i++;
          n+=Compute();
        }

      }
      else if(s[i]==')')
      {
        ++i;
        return n;
      }
      else if(s[i]>='0' && s[i]<='9')
      {
        if(i>0 && s[i-1]=='*')
          n*=Number();
        else if(i>0 && s[i-1]=='/')
          n/=Number();
        else if(i>0 && s[i-1]=='-')
          n-=Number();
        else if(i>0 && s[i-1]=='%')
          n%=Number();
        else n+=Number();
      }
      else
        ++i;
    }
    return n;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>s;
    i=0;
    cout<<Compute()<<endl;
    return 0;
}
