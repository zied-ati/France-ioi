#include <iostream>

using namespace std;

int main()
{
     int n,a;
     cin>>n;
     int cnt=0;
     int maximum=0;
     for(int i=0;i<2*n;++i)
     {
        cin>>a;
        if(a>0)
           cnt++;
        else cnt--;
        maximum=(maximum>cnt)?maximum:cnt;
     }
     cout<<maximum<<endl;
     return 0;
}