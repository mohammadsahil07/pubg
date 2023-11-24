    #include<stdio.h>
    int main()  {
        int a,n;
        printf("pleaes enter the number");
        scanf("%d",&n);
        printf("factors of %d :",n);
        for(int i=1;i<=n;i++){
            a=n%i;
            if(a==0){printf("%d,",i);}
        }return 0;
    }