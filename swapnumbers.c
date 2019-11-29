#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a,b,temp;

    printf("Enter value of A :- ");
    scanf("%d",&a);
    printf("Enter value of B :-");
    scanf("%d",&b);
    printf("Value of A is :- %d & Value of B is :- %d \n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("Value of A is :- %d & Value of B is :- %d \n",a,b);


    return 0;
}
