#include <vector>
#include <cstdio>

using namespace std;

typedef unsigned long long int ull;

const ull N= 0x7fffffff;

vector<ull> fact;
vector<int> res;
ull number;


int main()
{
   ull facteur=1;
   ull product=1;
   while(product < N)
   {
      fact.push_back(product);
      product*=++facteur;
   }
   scanf("%llu",&number);
   int p;
   for(p=0;p<fact.size() && fact[p]<=number;++p);
   printf("%d\n",p);
   for(int i=p-1;i>=0;--i)
   {
      res.push_back(number/fact[i]);
      number-=fact[i]*(number/fact[i]);
   }
   printf("%d",res[res.size()-1]);
   for(int i=res.size()-2;i>=0;--i)
   {
      printf(" %d",res[i]);
   }
   return 0;
}