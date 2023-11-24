#include<stdio.h>
int main()  {
    int a,b,reverse=0;
    printf("enter the number");
    scanf("%d",&a);
    while(a!=0){
       b=a%10;
       reverse=10*reverse+b;
       a=a/10;
    }
    printf("reverse = %d",reverse);
    return 0;
}