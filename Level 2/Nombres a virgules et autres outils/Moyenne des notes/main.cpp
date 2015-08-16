#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin>>n;
   double sum,a;
   for(int i=0;i<n;++i)
   {
         cin>>a;
         sum+=a;
   }
   cout<<sum/n<<endl;
   return 0;
}