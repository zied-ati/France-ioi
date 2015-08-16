#include <iostream>

using namespace std;

int main()
{
   int h,a,w,c,b;
   int t;
   cin>>t;
   while(t--)
   {
      int cnt=0;
      cin>>h>>a>>w>>c>>b;
      if(h>=178 && h<=182)
         cnt++;
      if(a>=34)
         cnt++;
      if(w<70)
         cnt++;
      if(!c)
         cnt++;
      if(b)
         cnt++;
       if(cnt==5)
          cout<<"Très probable"<<endl;
       else if(cnt>=3)
          cout<<"Probable"<<endl;
       else if(cnt==0)
          cout<<"Impossible"<<endl;
       else
          cout<<"Peu probable"<<endl;
   }
   return 0;
}