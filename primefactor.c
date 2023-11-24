#include<stdio.h>
int main() {
    int n,a;
    printf("Please enter the number");
    scanf("%d",&n);
    if(n%2==0){printf("2\t");}

    for(int i=2;i<=n;i++){
        if(n%i==0){
            for(int j=2;j<i;j++){
                if(i%j==0){a=0;break;}
                else{a=1;}
            }
            if(a==1){printf("%d\t",i);}
        }
    }
    return 0;
}