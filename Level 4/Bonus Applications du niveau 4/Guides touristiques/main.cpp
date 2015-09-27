#include <bits/stdc++.h>
#define N 22
#define M 10000

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
string s;
int n,g,a,b;
vector<pair<int,int> > v;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    bool ans=true;
    cin>>g>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,1));
        v.push_back(make_pair(b,-1));
    }
    int cnt=0;
    sort(v.begin(),v.end());
    for(unsigned int i=0;i<v.size();++i)
    {
        cnt+=v[i].second;
        if(cnt>g)
            ans=false;
    }
    cout<<ans<<"\n";
    return 0;
}

