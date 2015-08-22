#include <bits/stdc++.h>
#define N 100100

using namespace std;
int tab[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>k>>n;
    for(int i=0;i<n;++i)
        cin>>tab[i];
    int maximum=0;
    for(int i=0;i<k;++i)
        maximum+=tab[i];
    int sum=maximum;
    for(int i=k;i<n;++i)
    {
        sum+=tab[i]-tab[i-k];
        if(sum>maximum)
            maximum=sum;
    }
    cout<<maximum<<endl;
    return 0;
}
