#include<stdio.h>
#include<conio.h>
int add(int a,int b,int c);
int sub(int a,int b,int c);
int mult(int a,int b,int c);

int sub(int a,int b,int c)
{
    int subtraction;
    subtraction=a-b-c;
}
int mult(int a,int b,int c)
{
    int multiple;
    multiple=a*b*c;
}

int add(int a,int b,int c)
{
   int total;
   total=a+b+c;

}
int main(int argc, char const *argv[])
{
    /* code */
    int addition,subtraction,multipl;
    addition=add(100,220,30);
    subtraction=sub(100,50,25);
    multipl=mult(5,5,5);
    
    printf("The addition of 3 number : %d\n",addition);
    printf("The subtraction of 3 number : %d\n",subtraction);
    printf("The Multiplication of 3 number : %d\n",multipl);
    

   
    return 0;
}
