#include<stdio.h>

int addition(int a,int b)
{
    printf("Addtiton of two %d and %d =%d \n",a,b,a+b);
}
int subtraction(int a,int b)
{
    printf("Subtraction of two %d and %d =%d \n",a,b,a-b);
}
int Multiplication(int a,int b)
{
    printf("Multiplication of two %d and %d =%d \n",a,b,a*b);
}
int Division(int a,int b)
{
    printf("Division of two %d and %d =%d \n",a,b,a/b);
}
int main(int argc, char const *argv[])
{
    /* code */
    int a,b,c;
    printf("Ente you a values -  ");
    scanf("%d",&a);
    printf("Ente you a values -  ");
    scanf("%d",&b);

    c=addition(a,b);
    c=subtraction(a,b);
    c=Multiplication(a,b);
    c=Division(a,b);
    
    return 0;
}
