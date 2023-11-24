#include<stdio.h>
int main()  {
    int n;
    printf("please enter the number ");
    scanf("%d",&n);
    int prod=1;
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    
    return 0;
}