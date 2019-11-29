#include<stdio.h>
//Recursion problem solve

int factorial(int a)
{ 
    if (a==0 ||a==1)
    {
        return 1;

    }
    else
    {
        return a*factorial(a-1);
    }
    


}

int main(int argc, char const *argv[])
{
    /* code */
    int num1,result;
    printf("Enter numbers: ");
    scanf("%d", &num1);
    result=factorial(num1);
    printf("Factorial of %d! is %d\n",num1,result);

    return 0;
}
