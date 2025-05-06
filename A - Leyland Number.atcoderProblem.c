
#include<stdio.h>
#include<math.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
int c= pow(a,b);
int d= pow(b,a);
int sum = c+d;

printf("%d\n",sum);


return 0;
}

