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
    int lcm =(x*y)/b;
    printf("%d is LCM",lcm);
    return 0;

}