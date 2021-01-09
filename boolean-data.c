#include <stdio.h>
#include <stdbool.h>

int main()
{
    short is_logged = 0;
    if(is_logged){
        printf("User Log In\n");
    } else{
        printf("User Log Out\n");
    }

    bool anam = true;
    if (anam){
        printf("This is Md Anamul Haque\n");
    } else{
        printf("Wrong\n");
    }

    bool user_logged = true;
    if(user_logged){
        printf("User log in\n");
    } else{
        printf("User log out\n");
    }
    return 0;
}
