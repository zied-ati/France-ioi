#include "robot.h"

int main()
{
   for(int i=0;i<9;++i)
      haut();
   droite();
   for(int j=0;j<5;++j)
   {
      for(int i=0;i<8;++i)
         droite();
      bas();
      for(int i=0;i<8;++i)
         gauche();
      if(j!=4)
         bas();
   }
   gauche();
}