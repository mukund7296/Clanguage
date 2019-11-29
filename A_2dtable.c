#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* 2 D array */

    int marks[2][4]={{51,26,37,48},{15,26,36,45}};
    int i;

    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //printf("Index marks[%d] and value is [%d] \n",i,marks[i][j]);
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}
