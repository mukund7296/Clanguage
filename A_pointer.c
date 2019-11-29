#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int num1=10,num2=99;
    printf("Value of num1   = %d\n", num1);
    printf("Value of num2   = %d\n", num2);
    printf("Addres of Pointer Num1 & Num 2 \n");
    printf("Value of num1   = %d\n", &num1);
    printf("Value of num2   = %d\n", &num2);
    int num3;
    num3=num1+num2;
    printf("Call by value addition is :=%d \n",num3);

    return 0;
}
