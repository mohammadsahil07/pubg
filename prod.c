#include<stdio.h>
int main()  {
    int a,b,prod=1;
    printf("enter the number");
    scanf("%d",&a);
    while(a!=0){
        b=a%10;
        prod=prod*b;
        a=a/10;
    }
    printf("%d",prod);
    return 0;
}