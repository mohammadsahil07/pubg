#include<stdio.h>
#include<math.h>
int main()  {
    int n,s=0,r,x,y=0;
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
    while(sum!=0){
        r=sum%8;
        s=10*s+r;
        sum/=8;
    }
    while(s!=0){
        x=s%10;
        y=y*10+x;
        s/=10;
    }

    printf("%d",y);
    return 0;
}