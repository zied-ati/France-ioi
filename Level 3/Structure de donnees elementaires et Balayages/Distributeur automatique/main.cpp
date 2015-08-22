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
    while(n--)
    {
        cin>>a>>s;
        if(a>=0)
        {
            for(int i=0;i<a;++i)
                Q.push(s);
        }
        else
        {
            a=-a;
            for(int i=0;i<a;++i)
                Q.pop();
        }
    }
    s=Q.front();
    while(!Q.empty())
    {
        string t=Q.front();
        if(t<s)
            s=t;
        Q.pop();
    }
    cout<<s<<endl;
    return 0;
}
