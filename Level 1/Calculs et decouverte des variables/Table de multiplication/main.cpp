#include <iostream>
#define N 20

using namespace std;

int main()
{
    for(int i=1;i<=N;++i)
    {
       cout<<i;
       for(int j=2;j<=N;++j)
          cout<<" "<<i*j;
       cout<<endl;
    }
}