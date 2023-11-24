#include<stdio.h>
int main()  {
    int n,sum=0;
    printf("please enter the number ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){sum =sum+i;}
    }
    if(n==sum){printf("this is a perfect number");}
    else{printf("this is not a perfect number");}
    return 0;
}