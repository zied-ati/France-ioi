
#include <bits/stdc++.h>
#define N 40
#define M 4

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
string s;
int tab[N][N]={0};
int n,m;
ii dir[M]={{1,0},{-1,0},{0,1},{0,-1}};

set<pair<ii,ii> > st;

void Compute(int a,int b,int c,int d)
{
    if(a==n && b==m && c==1 && d==1)
    {
        cout<<1<<"\n";
        st.clear();
        exit(0);
    }
    for(int i=0;i<M;++i)
    {
        for(int j=0;j<M;++j)
        {
            int t1=a+dir[i].first;
            int t2=b+dir[i].second;
            int t3=c+dir[j].first;
            int t4=d+dir[j].second;
            if(tab[t1][t2]==tab[t3][t4] && tab[t1][t2]!=0 && st.find(make_pair(ii(t1,t2),ii(t3,t4)))==st.end())
            {
                st.insert(make_pair(ii(t1,t2),ii(t3,t4)));
                Compute(t1,t2,t3,t4);
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>m>>n;
    for(int i=0;i<n;++i)
    {
        cin>>s;
        for(int j=0;j<m;++j)
        {
            if(s[j]=='J')
                tab[i+1][j+1]=1;
            else if(s[j]=='B')
                tab[i+1][j+1]=2;
            else if(s[j]=='R')
                tab[i+1][j+1]=3;
            else if(s[j]=='V')
                tab[i+1][j+1]=4;
        }
    }
    Compute(1,1,n,m);
    if(st.find(make_pair(ii(n,m),ii(1,1)))!=st.end())
        cout<<1<<"\n";
    else
        cout<<0<<"\n";
    st.clear();
    return 0;
}
