#include <bits/stdc++.h>
#define N 50100

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
string s;
int n1,n2,p,base;
vector<int> a;
vector<int> b;
int sum[N];


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>base>>n1>>n2;
    for(int i=0;i<n1;i++)
    {
        cin>>p;
        a.push_back(p);
    }
    for(int i=0;i<n2;++i)
    {
        cin>>p;
        b.push_back(p);
    }
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int t=0;
    int i=0;
    for(;i<a.size() || i<b.size() || t;++i,t/=base)
    {
        if(i<a.size() && i<b.size())
        {
            t+=a[i]+b[i];
            sum[i]=t%base;
        }
        else if(i<a.size())
        {
            t+=a[i];
            sum[i]=t%base;
        }
        else if(i<b.size())
        {
            t+=b[i];
            sum[i]=t%base;
        }
        else
        {
            sum[i]=t%base;
        }
    }
    for(int j=i-1;j>=0;--j)
    {
        if(!j)
            cout<<sum[j];
        else
            cout<<sum[j]<<" ";
    }
    return 0;
}
