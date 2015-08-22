#include <bits/stdc++.h>
#define N 50100

using namespace std;
int tab[N];

int main()
{
    int n;
    scanf("%d",&n);
    //freopen("test.out","w",stdout);
    for(int i=0;i<n;++i)
    {
      scanf("%d",tab+i);
    }
    sort(tab,tab+n);
    printf("%d",tab[0]);
    for(int i=1;i<n;++i)
        printf(" %d",tab[i]);
    printf("\n");
    return 0;
}
