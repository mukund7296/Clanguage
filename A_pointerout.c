#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num = 5;   // Suppose address of num = 0x1230
    int *ptr;      // Pointer variable
    printf("Value of num   = %d\n", num);
    printf("Address of num   = %d\n", &num);
    printf("Value of ptr   = %d\n", ptr);
     printf("Address of ptr   = %d\n", &ptr);
    ptr = &num;    // ptr points to 0x1230 or ptr points to num
    ptr++;         // ptr now points to 0x1234, since integer size is 4 bytes
     printf("Value of ptr   = %d\n", ptr);
     printf("Address of ptr   = %d\n", &ptr);
    ptr--; 
     printf("Value of ptr   = %d\n", ptr);
     printf("Address of ptr   = %d\n", &ptr);


    return 0;
}
