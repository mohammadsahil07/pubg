#include<stdio.h>
int main()  {
    int n;
    printf("please enter the number ");
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n;i=i+2){
        sum =sum+i;
    }
    printf("%d",sum);
    return 0;
}