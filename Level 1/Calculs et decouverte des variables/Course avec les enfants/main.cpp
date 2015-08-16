#include "robot.h"

int main()
{
   for(int i=1;i<=10;++i)
   {
      for(int j=0;j<i;++j)
         droite();
      ramasser();
      for(int j=0;j<i;++j)
         gauche();
      deposer();
   }
}