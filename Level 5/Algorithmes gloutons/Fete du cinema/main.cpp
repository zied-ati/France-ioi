#include <bits/stdc++.h>

using namespace std;
inline int MAX(int a,int b){return (a>b)?a:b;}
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
map<iii,ii> m;
int n,a,b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a>>b;
        m.insert(make_pair(make_pair(a,ii(0,i)),ii(0,b)));
        m.insert(make_pair(make_pair(b,ii(1,i)),ii(0,a)));
    }
    map<iii,ii>::iterator it,pre,last;
    it=pre=m.begin();
    last=m.begin();
    int cnt=0;
    int maximum=0;
    bool check=false;
    for(;it!=m.end();++it)
    {
        if(it->first.first!=last->first.first && check)
        {
            for(;pre!=it;++pre)
                pre->second.first=cnt;
        }
        if(it->first.second.first==1)
        {
            it->second.first = MAX(cnt,m[iii(it->second.second,ii(0,it->first.second.second))].first+1);
            check=true;
        }
        else
        {
            check=false;
            it->second.first = cnt;
            pre=it;
            pre++;
        }
        cnt=it->second.first;
        last=it;
        maximum = MAX(maximum,cnt);
    }
    cout<<maximum<<"\n";
    return 0;
}
