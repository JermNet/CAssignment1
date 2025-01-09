#include <stdio.h>

int main(void)
{
    int numOne, numTwo;
    printf("Please enter two whole numbers.\n");
    //Takes the users input
    scanf("%d %d", &numOne, &numTwo);
    if (numOne > numTwo) {
        printf("%d is greater than %d!", numOne, numTwo);
    } else if (numTwo > numOne) {
        printf("%d is greater than %d!", numTwo, numOne);
    } else {
        printf("%d is equal to %d!", numOne, numTwo);
    }
    
    return 0;
}