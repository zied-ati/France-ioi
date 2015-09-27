#include <bits/stdc++.h>
 
using namespace std;
 
map<int,int> m;
int n,a,r,b;
int C,S;
char type;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cin>>r;
    for(int i=1;i<=r;++i)
    {
        cin>>type;
        if(type=='M')
        {
            cin>>a>>b;
            map<int,int>::iterator it=m.find(a);
            if(it==m.end() && b!=0)
                m.insert(make_pair(a,b));
            else if(it!=m.end() && b==0)
                m.erase(it);
        }
        else if(type=='R')
        {
            cin>>a;
            if(m[a])
                cout<<a<<"\n";
            else
            {
                map<int,int>::iterator it=m.insert(make_pair(a,1)).first;
                if(it==m.begin())
                    cout<<-1<<"\n";
                else
                {
                    it--;
                    cout<<it->first<<"\n";
                    ++it;
                }
                m.erase(it);
            }
        }
    }
    return 0;
}