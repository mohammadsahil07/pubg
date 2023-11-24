#include<stdio.h>
int main()  {
    int n,a=1;
    printf("please enter the number");
    scanf("%d",&n);
    if(n>1){
    for(int i=2;i<n;i++){
        if(n%i==0){a=0;}
    }
    if(a==0){printf("not prime");}
    else{printf("prime");}}
    else{printf("not prime");}
    return 0;

}