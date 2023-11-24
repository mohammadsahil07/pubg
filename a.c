#include<stdio.h>
int main() {
    int a,l;
    printf("enter number");
    scanf("%d",&a);
    l=a%10;
    while(a>9){
        a=a/10;
    }
    printf("first digit = %d\nlast digit = %d",a,l);
    return 0;
}