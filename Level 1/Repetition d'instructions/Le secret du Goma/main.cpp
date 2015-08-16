#include "robot.h"

int main()
{
   droite();
   for(int i=0;i<15;++i){ 
      ramasser();
      droite();
   }
   deposer();
}