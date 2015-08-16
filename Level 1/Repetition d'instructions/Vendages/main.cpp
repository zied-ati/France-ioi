#include "robot.h"

int main()
{
   for(int t=0;t<20;++t)
   {
      ramasser();
      for(int i=0;i<15;++i)
         droite();
      deposer();
      for(int i=0;i<15;++i)
         gauche();     
   }
}