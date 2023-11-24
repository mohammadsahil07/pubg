#include<stdio.h>
int main()  {
   int a,b,c=0;
   printf("please enter the number");
   scanf("%d",&a);
   int d=a%10;
   while(a!=0){
    b=a%10;
    a=a/10;
    
   }
   printf("first digit =%d and last digit =%d\n sum of first and last digit= %d",b,d,b+d);
   return 0;
}