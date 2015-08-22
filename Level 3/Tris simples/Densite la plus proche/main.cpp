#include <bits/stdc++.h>
#define N 20100

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
inline int ABS(int a){return (a>0)?a:-a;}
int tab[N];
int n,q,a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>tab[i];
    }
    sort(tab,tab+n);
    cin>>q;
    for(int i=0;i<q;++i)
    {
        cin>>a;
        if(a>=tab[n-1])
        {
            cout<<tab[n-1]<<"\n";
        }
        else if(a<=tab[0])
        {
            cout<<tab[0]<<"\n";
        }
        else
        {
            int middle;
            int low=0;
            int high=n-1;
            while(low<high-1)
            {
                middle=low+(high-low)/2;
                if(tab[middle]>a)
                    high=middle;
                else
                {
                    low=middle;
                }

            }
            if(ABS(a-tab[low])<=ABS(tab[low+1]-a))
                cout<<tab[low]<<"\n";
            else cout<<tab[low+1]<<"\n";
        }
    }
    return 0;
}
