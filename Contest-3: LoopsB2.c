#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
  while ( t --)
    {
int m,x;
scanf("%d%d",&m,&x);
int z = m - x;
if ( z < 0)
printf("0\n");
else
 printf("%d\n",z);
    }

return 0;
}
