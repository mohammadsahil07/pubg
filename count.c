#include<stdio.h>
int main()  {
   int a,b,c=0;
   printf("please enter the number");
   scanf("%d",&a);
   while(a!=0){
    a=a/10;
    c++;
   }
   printf("%d",c);
   return 0;
}