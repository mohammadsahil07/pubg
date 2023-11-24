#include<stdio.h>
int main()  {
    int n,a,sum=2;
    printf("please enter the number  ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){a=0;break;}
            else{a=1;}
        }
        if(a==1){sum=sum+i;}
    }
    printf("%d",sum);
    return 0;
}