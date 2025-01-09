#include <stdio.h>

int main(void)
{
    //Intialises an array (a list) of these numbers
    int aFewNumbers[] = {33, 12, 63, 50, 278, 487, 111, 89};
    
    /* This is a bit more complex but, in short, sizeof gets the size of the array is
    the array in bytes and then diveds it by the size of an int in bytes to get the size
    of the array*/
    int arraySize = sizeof(aFewNumbers) /sizeof(int);
    
    //Loops through the elements of the array
    for (int i = 0; i < arraySize; i++) {
        
        /*Checks if the number is even by using the % operator to check if there is a
        remainder is 0 or 1*/
        if ((aFewNumbers[i] % 2) == 0) {
            printf("The number %d is even!\n", aFewNumbers[i]);
        } else {
            printf("The number %d is odd!\n", aFewNumbers[i]);
        }
    }

    return 0;
}