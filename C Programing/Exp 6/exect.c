#include<stdio.h>
#include<math.h>

int main()
{
    float u,a,t,v,s;
    float b,c,T;
    float p,H;

    /* Input for equation (i) and (ii) */
    printf("Enter u, a, t: ");
    scanf("%f %f %f",&u,&a,&t);

    /* Equation (i) */
    v = u + a*t;

    /* Equation (ii) */
    s = u*t + 0.5*a*t*t;

    printf("V = %f\n",v);
    printf("S = %f\n",s);

    /* Input for equation (iii) */
    printf("Enter a, b, c: ");
    scanf("%f %f %f",&a,&b,&c);

    /* Equation (iii) */
    T = 2*a + sqrt(b) + 9*c;
    printf("T = %f\n",T);

    /* Input for equation (iv) */
    printf("Enter b and p: ");
    scanf("%f %f",&b,&p);

    /* Equation (iv) */
    H = sqrt(b*b + p*p);
    printf("H = %f\n",H);

    return 0;
}