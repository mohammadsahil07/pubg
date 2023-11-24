#include<stdio.h>
int main()  {
    int n,a,b=0;
    printf("please enter the number ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        for(int k=1;k<i;k++){
           if(i%k==0){b=b+k;}
        }
        if(b==i){printf("%d\n",i);}
        b=0;
    }
    return 0;
}