#include<stdio.h>
int main()  {
    int a,b,sum=0;
    printf("enter the number");
    scanf("%d",&a);
    while(a!=0){
       b=a%10;
       sum=sum+b;
       a/=10;
    }
    printf("%d is the sum of digits",sum);
    return 0;
}