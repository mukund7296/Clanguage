#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    //Example to access pointer to a pointer

int num = 10;        // Declare an integer variable
int *ptr   = &num;   // Pointer to integer
int **dPtr = &ptr;   // Pointer to integer pointer

printf("Value of Num = %d \n", num); 
printf("Value of dPtr = %d \n", dPtr);   // Print value of dPtr, i.e address of ptr
printf("Value of dPtr = %d \n", *ptr);
printf("Value of ptr = %d \n", *dPtr);   // Print value of ptr, i.e. address of num
printf("Value of num = %d \n", **dPtr);  // Print value of num
    return 0;
}
