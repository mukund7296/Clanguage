#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int a=20,b=5;

    printf("a+b:-  %d\n",a+b);
    printf("a-b:-  %d\n",a-b);
    printf("a*b:-  %d\n",a*b);
    printf("a/b:-  %d\n",a/b);
    printf("a%b:-  %d\n",a%b);
//swaping number without 3rd variable
    printf("\na :-    %d \nb:-   %d",a,b);
    a=a+b;  //25
    b=a-b;   //30-25
    a=a-b;
       printf("\na :-  %d \nb:-   %d\n",a,b);
    return 0;
}
