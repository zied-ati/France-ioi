#include <bits/stdc++.h>
#define N 22
#define M 4

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
string s;
int n,a;
map<int,int> m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a;
        m[a]++;
    }
    int maximum=0;
    for(map<int,int>::iterator it=m.begin();it!=m.end();++it)
    {
        maximum=MAX(maximum,it->second);
    }
    cout<<maximum<<"\n";
    return 0;
}
