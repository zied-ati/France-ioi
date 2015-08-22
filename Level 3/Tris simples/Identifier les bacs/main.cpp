#include <bits/stdc++.h>
#define N 50100

using namespace std;
set<pair<int,int> > s;


int main()
{
    int n,a,b;
    scanf("%d",&n);
    //freopen("test.out","w",stdout);
    for(int i=1;i<=n;++i)
    {
        scanf("%d %d",&a,&b);
        s.insert(make_pair(b,a));
    }
    for(set<pair<int,int> >::iterator it=s.begin();it!=s.end();++it)
        printf("%d %d\n",it->second,it->first);
    return 0;
}
