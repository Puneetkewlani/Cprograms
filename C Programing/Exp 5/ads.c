#include <stdio.h>

int main()
{
    char ch;
    int a,b,sum=0;

    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    printf("Enter your choice (+ - * /)\n");
    scanf(" %c",&ch);   // fixed

    if(ch=='+'){
        sum=a+b;
    }
    else if(ch=='-'){
        sum=a-b;
    }
    else if(ch=='*'){
        sum=a*b;
    }
    else if(ch=='/'){
        sum=a/b;
    }
    else{
        printf("Invalid choice");
        return 0;
    }

    printf("Result = %d",sum);
    return 0;
}