#include <bits/stdc++.h>
#define N 22
#define M 10000

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
string s;
int n,g,a,b;
map<int,int> m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int ans=0;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a;
        if(a)
            m[a]++;
        else
        {
            int d=distance(m.begin(),m.end());
            ans=MAX(ans,d);
            m.clear();
        }
    }
    int d=distance(m.begin(),m.end());
    ans=MAX(ans,d);
    m.clear();
    cout<<ans<<"\n";
    return 0;
}

