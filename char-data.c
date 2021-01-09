#include <stdio.h>

int main()
{
    char number[20] = "Md Anamul Haque";
    printf("%s\n", number);

    char anam[20] = {'M', 'D', ' ', 'A'};
    printf("%s\n", anam);

    char anam_khan[30];
    printf("What is your name? ");
    scanf("%s", anam_khan);
    printf("Thank You %s\n", anam_khan);

    return 0;
}
