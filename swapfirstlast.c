#include<stdio.h>
#include<math.h>
int main()  {
    int n,f,a=0,l,num,x,y,w,k,z;
    printf("please enter the number ");
    scanf("%d",&n);
    int m=n;
    while(m>9){
        m=m/10;
        a++;
    }
    f=n/(int)pow(10,a);
    l=n%10;
    x=n%(int)pow(10,a);
    y=x/10;
    z=y*10;
    w=z+f;
    k=l*(int)pow(10,a);
    num=k+w;
    printf("original number is %d\nafter swapping first and last digit is %d",n,num);
    return 0;
}