#include <bits/stdc++.h>
#define N 64

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
string s;
stack<string> S;
int tab[N][N];

void Compute(int from,int to)
{
    if(from==to)
    {
        cout<<from;
        return;
    }
    Compute(from,from);
    cout<<" ";
    Compute(from+1,to);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    Compute(n,m);
    return 0;
}
