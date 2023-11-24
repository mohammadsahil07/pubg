#include<stdio.h>
#include<math.h>
int main()  {
    int n,sum=0,a,r,b,c=0;
    printf("please enter the number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        a=i;b=i;
        while(a!=0){a=a/10;c++;}
        while(b!=0){
            r=b%10;
            sum=sum+pow(r,c);
            b=b/10;
            
        }
       
        if(sum==i){printf("%d\t",i);}
        sum=0;
        c=0;
        
    }
    return 0;
    
    }