#include <bits/stdc++.h>
#define N 20100

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
string s;
int n,q,a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>s;
    n=0;
    for(int i=0;i<s.length();++i)
    {
        n<<=1;
        if(s[i]=='1')
            n++;
    }
    cout<<n<<endl;
    return 0;
}
