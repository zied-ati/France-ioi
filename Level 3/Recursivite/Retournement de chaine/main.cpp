#include <bits/stdc++.h>
#define N 64

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
string s;
int tab[N][N];

void Compute(int from,int to)
{
    if(from==to)
    {
        cout<<s[to];
        return;
    }
    Compute(to,to);
    Compute(from,to-1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,s);
    Compute(0,s.length()-1);
    return 0;
}
