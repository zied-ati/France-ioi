#include <bits/stdc++.h>
#define N 10010

using namespace std;
int tab[N];
queue<string> Q;
int n,q;
int type,a;
string s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    getline(cin,s);
    getline(cin,s);
    int cnt=0;
    bool correct=true;
    for(int j=0;j<s.length();++j)
    {
        if(s[j]=='(')
        {
            cnt++;
        }
        else if(s[j]==')')
        {
            cnt--;
            if(cnt<0)
            {
                correct=false;
                break;
            }
        }
    }
    if(cnt!=0)
        correct=false;
    cout<<correct<<endl;
    return 0;
}
