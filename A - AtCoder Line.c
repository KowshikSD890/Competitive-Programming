#include<stdio.h>
int main(){
int n,x,y,z;
scanf("%d%d%d%d",&n,&x,&y,&z);

if(x<y){
if(x<=z && y>=z) printf("Yes\n");
    else printf("No\n");
}
else {
if(y<=z && x>=z)   printf("Yes");
    else printf("No");
}



return 0;
}
