#include "robot.h"

int main()
{
     for(int j=0;j<108;++j)
     {
        for(int i=0;i<13;++i)
           haut();
        for(int i=0;i<13;++i)
           droite();
        for(int i=0;i<13;++i)
           bas();
        for(int i=0;i<13;++i)
           gauche();
     }
}