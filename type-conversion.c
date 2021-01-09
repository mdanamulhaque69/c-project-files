#include <stdio.h>

int main(void)
{
    char ch = 'T';
    printf("%c %d %x\n", ch, ch, ch);

    int r = (int)ch + 100;
    printf("%d\n", r);

    int f = (float)r;
    printf("%f\n", f);

    float a = 3.4f;
    float b = 2.2f;
    float c = 8.4f;

    int result = a + b + c;
    printf("%d\n", result);

    int result2 = (int)a + (int)b + (int)c;
    printf("%d", result2);


    return 0;
}
