#include<stdio.h>
#include<math.h>
int main()  {
    int n,a,b=0;
    printf("please enter any number");
    scanf("%d",&n);
    int n1=n,n2=n;
    int count=0;
    while(n!=0){
        n/=10;
        count++;
    }
    while(n1!=0){
        a=n1%10;
        b=b+pow(a,count);
        n1=n1/10;
    }
    
    if(b==n2){printf("it is an armstrong number");}
    else{printf("it is not an armstrong number");}
    return 0;
    
}