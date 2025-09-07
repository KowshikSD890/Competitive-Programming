#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
//for(int tc = 1; tc <= t; tc++)
while(t--)
{
    int temp;
    scanf("%d",&temp);

if(temp > 24){
    printf("Yes\n");
}    else{
        printf("No\n");
    }
}


return 0;

}
