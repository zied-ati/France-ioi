#include <bits/stdc++.h>
#define N 20100

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
string s;
long long int n,q,a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    string s;
    int sum=0;
    int cnt=-1;
    n=1000;
    while(cin>>s && cnt<n)
    {
        int p=0;
        for(int i=0;i<s.length();++i)
        {
            if(s[i]>='0' && s[i]<='9')
                p=p*16+s[i]-'0';
            else if(s[i]>='A' && s[i]<='F')
                p=p*16+10+s[i]-'A';
        }
        if(cnt!=-1)
        {
            sum+=p;
        }
        else
            n=p;
        cnt++;
    }
    int avg=sum/cnt;
    if(avg==0)
    {
        cout<<0<<endl;
        return 0;
    }
    string ans="";
    while(avg!=0)
    {
        int t=avg%16;
        avg/=16;
        if(t>=10)
            ans+='A'+t-10;
        else
            ans+=t+'0';
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}
