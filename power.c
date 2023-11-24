#include<stdio.h>
int main()  {
    int b,p,num=1;
    printf("please enter the base \n");
    scanf("%d",&b);
    printf("please enter the power \n");
    scanf("%d",&p);
    for(int i=1;i<=p;i++){
        num=num*b;
    }
    printf("value = %d",num);
    return 0;
}