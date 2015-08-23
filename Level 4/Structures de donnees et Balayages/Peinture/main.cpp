#include <bits/stdc++.h>
#define N 100001
#define M 128

using namespace std;
inline int MAX(int a,int b){return (a<b)?b:a;}
typedef pair<int,int> ii;
int tab[N];
int group[N]={0};

int n,d,o,t,sum;
string a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>sum;
    for(int i=0;i<n;++i)
      cin>>tab[i];
    for(int i=0;i<n;++i)
    {
      int a=sum-tab[i];
      int low=0,high=n-1;
      while(low<high)
      {
         int middle=low+(high-low)/2;
         if(tab[middle]==a)
         {
            cout<<"OUI"<<endl;
            return 0;
         }
         else if(tab[middle]<a)
         {
            low=middle+1;
         }
         else if(tab[middle]>a)
         {
            high=middle;
         }
      }
    }
    cout<<"NON"<<endl;
    return 0;
}
