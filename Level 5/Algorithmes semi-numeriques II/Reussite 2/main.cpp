#include <bits/stdc++.h>
#define M 32

using namespace std;
inline int MAX(int a,int b){return (a>b)?a:b;}
typedef pair<int,int> ii;
int n;
map<int,int> m;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int s=sqrt(n);
    s++;
    for(int i=2;i<=s;++i)
    {
        if(n%i==0)
        {
            m[i]++;
            m[n/i]++;
        }
    }
    if(m.size()==0)
        cout<<0<<"\n";
    else
        for(map<int,int>::iterator it=m.begin();it!=m.end();++it)
            cout<<it->first<<"\n";
    return 0;
}
