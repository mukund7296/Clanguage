#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* 1-D array Take input from user and store in array*/
    int marks[10],i;
    for (int i = 0; i < 11; i++)
    {
        printf("Enter your %d array element value :=",i);
        scanf("%d",&marks[i]);
    }
    printf("***************************\n");
    for (int i = 0; i < 11; i++)
    {
        /* code */
        printf("Element of %d Is %d\n",i,marks[i]);
    }
    printf("***************************\n");
    return 0;
}
