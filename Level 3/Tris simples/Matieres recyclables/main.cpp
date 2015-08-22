#include <bits/stdc++.h>
#define N 50100

using namespace std;
vector<string> v;
string s;
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;++i)
        cout<<v[i]<<"\n";
    return 0;
}
