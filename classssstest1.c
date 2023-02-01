#include<stdio.h>
#include<math.h>
int main()
{
    float m,x,t;
    printf("Value of x is:\n");
    scanf("%f",&x);
    printf("Value of t is:\n");
    scanf("%f",&t);
    m=pow(((sqrt(3)*t*t)/(sqrt(t)+x)),x)+log10(pow((sqrt(t+3)/(t*t)),t));
    printf("m=%f",m);
    return 0;
}

