#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int arr[]={121,2,3,4,5,6,77,88,99};
    printf("value of first element is = %d\n",arr[0]);
    printf("Addres of First element =%d\n",&arr[0]);
    printf("Addres of First element =%d\n",&arr[1]); //one type
    printf("Addres of First element =%d\n",arr+1); //second type

    printf("value of first element is = %d\n",*(arr));
    printf("Addres of First element =%d\n",&arr[0]);
    printf("Addres of First element =%d\n",&arr[1]); //one type
    printf("Addres of First element =%d\n",arr+1); //second type
    return 0;
}
