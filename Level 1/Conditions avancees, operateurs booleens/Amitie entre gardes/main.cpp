#include <iostream>

using namespace std;

int main()
{
   int ax,ay,bx,by;
   cin>>ax>>ay>>bx>>by;
   if((bx<=ax && ax<=by) || (bx<=ay && ay<=by))
      cout<<"Amis"<<endl;
   else if((ax<=bx && bx<=ay) || (ax<=by && by<=ay))
      cout<<"Amis"<<endl;
   else 
      cout<<"Pas amis"<<endl;
   return 0;
}