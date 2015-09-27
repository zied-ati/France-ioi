#include <bits/stdc++.h>
#define N ((1<<17)+2)

using namespace std;
typedef pair<int,int> ii;
set<ii,greater<ii> > s;
int n,r;
int a,v;
int tab[N]={0};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>r;
    for(int i=0;i<r;++i)
    {
        cin>>a>>v;
        set<ii>::iterator it = s.find(ii(tab[a],a));
        if(it!=s.end())
            s.erase(it);
        s.insert(ii(v,a));
        tab[a]=v;
        cout<<s.begin()->first<<"\n";
    }
    return 0;
}
