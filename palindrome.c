    #include<stdio.h>
    int main()  {
        int a,r,rev=0;
        printf("please enter the number");
        scanf("%d",&a);
        int c=a;
        while(a!=0){
            r=a%10;
            a=a/10;
            rev=10*rev+r;
        }
        if(c==rev){printf("this is a palindrome number");}
        else{printf("not palindrome");}
    return 0;
    }