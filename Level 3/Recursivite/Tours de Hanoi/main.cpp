#include <bits/stdc++.h>
#define N 64

using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
string s;
stack<string> S;
int tab[N][N];

void Compute(int from,int to,int n)
{
    if(n==1)
    {
        cout<<from<<" -> "<<to<<endl;
        return;
    }
    int aux;
    if((from==1 && to==3)||(from==3 && to==1)) aux=2;
    if((from==2 && to==3)||(from==3 && to==2)) aux=1;
    if((from==1 && to==2)||(from==2 && to==1)) aux=3;
    Compute(from,aux,n-1);
    cout<<from<<" -> "<<to<<endl;
    Compute(aux,to,n-1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    Compute(1,3,n);
    return 0;
}
