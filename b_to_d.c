#include<stdio.h>
#include<math.h>
int main()  {
    int n;
    printf("please enter a binary number");
    scanf("%d",&n);
    int sum=0,m=0,a,p;
    while(n!=0){
        a=n%10;
        p=a*(int)pow(2,m);
        sum=sum+p;
        m++;
        n/=10;
    }
    printf("%d",sum);
    return 0;
}