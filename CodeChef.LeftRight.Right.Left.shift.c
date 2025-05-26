#include<stdio.h>
int main(){
int n,l,r;
scanf("%d %d %d",&n,&l,&r);

int right = n >> r;
int light = l << right;

printf("%d\n",light);

return 0;
}
