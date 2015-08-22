#include <bits/stdc++.h>
#define N 64

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
string s;
stack<string> S;
int tab[N][N];

void Compute(int x1,int z1,int x2,int z2)
{
    if(x2-x1==1 && z2-z1==1)
    {
        tab[x1][z1]=1;
        tab[x1][z2]=1;
        tab[x2][z1]=1;
        tab[x2][z2]=0;
        return;
    }
    Compute(x1,z1,x1+(x2-x1)/2,z1+(z2-z1)/2);
    Compute(x1+(x2-x1)/2+1,z1,x2,z1+(z2-z1)/2);
    Compute(x1,z1+(z2-z1)/2+1,x1+(x2-x1)/2,z2);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"#"<<endl;
        return 0;
    }
    Compute(0,0,n-1,n-1);
    for(int k=0;k<n;++k)
    {
        for(int j=0;j<n-k;++j)
        {
            if(tab[k][j])
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
