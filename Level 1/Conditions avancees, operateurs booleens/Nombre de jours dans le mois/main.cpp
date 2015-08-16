#include <iostream>
#define N 11

using namespace std;
int tab[N]={30,30,30,31,31,31,30,30,30,31,29};

int main()
{
   int n;
   cin>>n;
   cout<<tab[n-1]<<endl;
   return 0;
}