#include <stdio.h>

int main()
{
    int a,b,c,largest;

    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    largest = (a>b && a>c) ? a : (b>c ? b : c);

    printf("Greatest number = %d",largest);

    return 0;
} //  using Ternary Operator..