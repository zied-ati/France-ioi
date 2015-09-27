#include <bits/stdc++.h>
#define dim 100010

using namespace std;
void Update(int,int);
int Query(int);

int Arb[dim]={0};
int Tab[dim]={0};
int n,a,r,b;
int C,S;
char type;

int main()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a;
        Tab[i]=a;
        Update(i,a);
    }

    cin>>r;
    while(r--)
    {
        cin>>type>>a>>b;
        if(type=='M')
        {
            Update(a+1,b-Tab[a+1]);
            Tab[a+1]=b;
        }
        else if(type=='S')
            cout<<Query(b+1)-Query(a)<<"\n";
    }
    return 0;
}

void Update(int pos, int val)
{
    C=0;
    while(pos <= n)
    {
        Arb[pos]+=val;
        while( !(pos & (1<<C))) C++;
        pos+=(1<<C);
        C++;
    }
}

int Query(int pos)
{
    C=0, S=0;
    while(pos > 0)
    {
        S += Arb[pos];
        while( !(pos & (1<<C)) ) C++;
        pos -=(1<<C);
        C++;
    }
    return S;
}
