#include <bits/stdc++.h>
#define N 20100

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
string s;
stack<string> S;

void Compute(int n,int m)
{
    if(m>0)
    {
        cout<<"[";
        Compute(n,m-1);
        cout<<"]";
    }
    else
    {
        cout<<n;
    }

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
