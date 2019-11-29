#include<string.h>
int main(int argc, char const *argv[])
{
    /* code */
    int marks[5] = {90, 86, 89, 76, 91};
    int marks1[] = {90, 86, 89, 76, 91,20};

  

    
    printf("Value of array is %d\n",marks[0]);
    printf("Value of array is %d\n",marks[1]);
    printf("Value of array is %d\n",marks1[3]);
    printf("Value of array is %d\n",marks1[0]);
        
    printf("address of array is %d\n",&marks[0]);
    printf("address of array is %d\n",&marks[1]);
    printf("address of array is %d\n",&marks1[3]);
    printf("address of array is %d\n",&marks1[0]);
    return 0;
}
