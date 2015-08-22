#include <bits/stdc++.h>
#define N 20100

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
string s;
stack<string> S;

string Compute(int n)
{
    if(n==0)
    {
        return "0";
    }
    string t=Compute(n-1);
    string s="("+t+" + "+t+")";
    return s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    cout<<"0 = ";
    cout<<Compute(n);
    return 0;
}
