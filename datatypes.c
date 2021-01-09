
#include <stdio.h>

int main()
{
    int num = 45;
    float number = 45.45f;
    char cha = "T";

    printf("%d\n", num);
    printf("%f\n", number);
    printf("%c\n", cha);

    float a, b;
    a = 39.389f;
    b = 22.008488f;

    printf(" %f + %f = %f\n", a, b, a + b);
    printf(" %f - %f = %f\n", a, b, a - b);
    printf(" %f * %f = %f\n", a, b, a * b);
    printf(" %f / %f = %f\n", a, b, a / b);

    return 0;
}
