#include <bits/stdc++.h>
#define N 50100

using namespace std;
inline int MAX(int a,int b)
{
    return (a<b)?b:a;
}
string s;
int n1,n2,p,base,n;
int a[N]={0};
int b[N]={0};
int sum[N]={0};

bool Compare(int n1,int n2)
{
    if(n1>n2)
        return true;
    else if(n1<n2)
        return false;
    else
    {
        for(int i=0; i<n; ++i)
        {
            if(b[i]>a[i])
                return false;
            else if(b[i]<a[i])
                return true;
        }
        return true;
    }

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>base>>n1>>n2;
    n=MAX(n1,n2);
    for(int i=n-n1; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=n-n2; i<n; ++i)
    {
        cin>>b[i];
    }
    if(!Compare(n1,n2))
    {
        cout<<"- ";
        swap(a,b);
    }
    reverse(a,a+n);
    reverse(b,b+n);
    for(int i=0; i<n; ++i)
    {
        sum[i]=a[i]-b[i];
    }
    for(int i=0; i<n;)
    {
        if(sum[i]<0)
        {
            int j=i;
            while(j<n && sum[++j]<=0);
            sum[j]--;
            int k;
            for(k=j-1; k>=i+1; --k)
            {
                sum[k]+=base;
                if(sum[k]>0)
                    sum[k]--;
                else break;
            }
            if(k==i)
            {
                sum[i]+=base;
                ++i;
            }
        }
        else
            ++i;
    }
    int j=n-1;
    int cnt=0;
    while(j>=0)
    {
        if(!cnt)
        {
            if(sum[j])
            {
                cout<<sum[j];
                cnt++;
            }
        }
        else
        {
            cout<<" "<<sum[j];
        }
        --j;
    }
    if(!cnt)
        cout<<0;
    return 0;
}
