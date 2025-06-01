#include<stdio.h>
int main()
{
int x,y;
scanf("%d%d",&x,&y);
if((y>=x && y-x<=2) || (y<=x && x-y<=3))
{
    printf("Yes");
}
else
{
    printf("No");
}

return 0;
}

