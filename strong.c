#include<stdio.h>
int main()  {
    int n,r,p=1,sum=0;
    printf("please enter the number ");
    scanf("%d",&n);
    int n1=n;
    while(n!=0){
        r=n%10;
        for(int i=1;i<=r;i++){p=p*i;}
        sum=sum+p;
        n=n/10;
        p=1;
    }
    if(sum==n1){printf("this is a strong number ");}
    else{printf("this not a square number");}
    return 0;
}
