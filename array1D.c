#include<stdio.h>
#include<string.h>

int add(int ar[],int n);

int main(int argc, char const *argv[])
{
    /* 1D array */
    int a[10];
    int i,sum;

    printf("Enter your array size \n");
    for (int i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d",&a);
    }
    
    sum=add(a,10);
    printf("Addition of all array is %d\n",sum);


    return 0;
}
int add(int ar[],int n)
{
    int i ,total=0;
    for (i=0; i<n; i++)
    {
        total+=ar[i];
    }
    return (total);
}
