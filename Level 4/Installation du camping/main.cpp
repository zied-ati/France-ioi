#include <cstdio>
#define N 400

int t[N][N];
int nb[N][N];


int main()
{
   int n,m;
   scanf("%d %d",&n,&m);
   for(int i=0;i<n;++i)
   {
      for(int j=0;j<m;++j)
      {
         scanf("%d",&t[i][j]);
      }
   }
   for(int i=0;i<n;++i)
   {
      if(t[i][0]==0)
         nb[i][0]=1;
      else nb[i][0]=0;
   }
   for(int i=0;i<m;++i)
   {
      if(t[0][i]==0)
         nb[0][i]=1;
      else nb[0][i]=0;
   }
   int maximum=nb[0][0];
   for(int i=1;i<n;++i)
   {
      for(int j=1;j<m;++j)
      {
         int max=nb[i-1][j-1];
         int p=0;
         for(p=0;p<=max;++p)
         {
            if(t[i-p][j] == 1 || t[i][j-p]==1)
               break;
         }
         nb[i][j]=p;
         if(p>maximum)
            maximum=p;
      }  
   }
   printf("%d\n",maximum);
   return 0;
}