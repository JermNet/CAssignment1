#include <stdio.h>

int main(void)
{
    //Initalizes variables of different types
    int x = 18;
    float y = 64.33;
    char letter = 'J';

    //%d is for ints, %f for floats, %c for chars and %p and an & for memory addresses
    printf("The int is %d the float is %f and the char is %c", x, y, letter);
    printf("\nAnd their memory addresses are %p, %p and %p", &x, &y, &letter);    
    return 0;
}