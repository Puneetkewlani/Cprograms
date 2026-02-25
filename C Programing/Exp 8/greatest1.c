#include <stdio.h>

int main()
{
    int a,b,c,largest;

    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c)
        largest = a;
    else if(b>=a && b>=c)
        largest = b;
    else
        largest = c;

    printf("Greatest number = %d",largest);

    return 0;
} // this is using if-else Statement.. 