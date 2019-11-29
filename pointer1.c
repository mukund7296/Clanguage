/**
 * C program to get memory address of a variable
 */

#include <stdio.h>

int main()
{
    int num = 10;
    int *p=&num;

    printf("Value of num   = %d\n", num);

    /* &num gets the address of num. */
    printf("Address of num = %d\n", &num);

    printf("Address of num in hexadecimal = %x\n", &num);

    printf("\nAddress of p  = %d\n", p);
    printf("Address of p in value = %d\n", *p);
    printf("Address of p in hexadecimal = %x\n", &p);

    

    return 0;
}