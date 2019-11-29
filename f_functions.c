#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int main(int argc, char const *argv[])
{
    /* code */
    int a,b,c;
    printf("Ente values of a & b =");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("Sum of %d and %d = %d\n",a,b,c);
    return 0;
}
