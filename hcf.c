#include<stdio.h>
int main()  {
    int x,y,a,b;
    printf("please enter the two numbers ");
    scanf("%d %d",&x,&y);
    if(x>y){a=y;}
    else{a=x;}
    for(int i=1;i<=a;i++){  
       if((x%i==0)&&(y%i==0)){b=i;}
    }
    printf("hcf = %d",b);
    return 0;

}