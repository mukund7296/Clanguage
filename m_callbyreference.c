/**
 * C program to swap two numbers using call by value
 */

#include <stdio.h>

/* Swap function definition */
void swap(int *num1, int *num2)
{
    int temp;
    temp=*num1+*num2;

    printf("Call by reference :=  %d \n", temp);

}
void addition(int num1, int num2)
{
    int temp1;
    temp1=num1+num2;

    printf("Call by Value :=  %d \n", temp1);

}
/* main() function definition */
int main()
{
    int n1, n2;


    /* Input two integers from user */
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);
    swap(&n1,&n2);
    addition(n1,n2);
    return 0;
}