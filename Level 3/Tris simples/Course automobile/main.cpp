#include <bits/stdc++.h>
#define N 1002

using namespace std;
int tab[N];
int pos[N];
int x[N*N];
int y[N*N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    //freopen("test.out","w",stdout);
    for(int i=0;i<n;++i)
    {
      cin>>tab[n-i-1];
      pos[tab[n-i-1]]=n-i-1;
    }
    int cnt=0;
    for(int i=1;i<=n;++i)
    {
        int j=pos[i];
        for(int k=j+1;k<n;++k)
        {
            if(i<tab[k])
            {
                x[cnt]=tab[k];
                y[cnt]=i;
                cnt++;
            }
        }
    }
    printf("%d\n",cnt);
    for(int i=0;i<cnt;++i)
        printf("%d %d\n",x[i],y[i]);
    return 0;
}
