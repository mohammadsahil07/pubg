#include<stdio.h>
int main()  {
    int x,p=1;
    printf("please enter the number");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        p=p*i;
    }
    printf("%d",p);
    return 0;
}