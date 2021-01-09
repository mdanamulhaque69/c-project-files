#include <stdio.h>

int main()
{
    float a, b, result;

    printf("Please Enter Two Numbers : ");
    scanf("%f %f", &a, &b);

    result = a + b;
    printf("%f + %f = %f\n", a, b, result);

    result = a - b;
    printf("%f - %f = %f\n", a, b, result);

    result = a * b;
    printf("%f & %f = %f\n", a, b, result);

    result = a / b;
    printf("%f / %f = %f\n", a, b, result);

    return 0;


}
