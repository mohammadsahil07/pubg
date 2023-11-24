#include<stdio.h>
int main(){
    int n,a;
    printf("please enter the number ");
    scanf("%d",&n);
    printf("2\t");
    for(int i=2;i<=n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){a=0;break;}
            else{a=1;}
        }
        if(a==1){printf("%d\t",i);}
    }
    return 0;
}