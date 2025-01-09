#include <stdio.h>

int main(void)
{
    int weekday;
    printf("Please input a whole number from 1 to 7.\n");
    scanf("%d", &weekday);

    //The exact same as java
    switch (weekday) {

        case 1:
            printf("It is Monday!");
            break;
        case 2:
            printf("It is Tuesday!");
            break;
        case 3:
            printf("It is Wednesday!");
            break;
        case 4:
            printf("It is Thursday!");
            break;
        case 5:
            printf("It is Friday!");
            break;
        case 6:
            printf("It is Saturday!");
            break;
        case 7:
            printf("It is Sunday!");
            break;
        default:
            printf("Not a valid option.");
    }

    return 0;
}