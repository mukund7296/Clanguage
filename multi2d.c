#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int matrix[4][3] = {
                       {10, 20, 30},    // Initializes matrix[0]
                       {40, 50, 60},    // Initializes matrix[1]
                       {70, 80, 90},    // Initializes matrix[2]
                       {100, 110, 120}  // Initializes matrix[3]
                   };

    int matrix1[4][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120};
    int i,j;

    for(i=0; i<4; i++)
{
    // Runs 3 times for each row.
    for(j=0; j<3; j++)
    {
        printf("Index [%d][%d] = %d\n",i,j,matrix[i][j]);
    }
}

printf("\n+++++++++++++++++++++++++++++++++++\n");
for(i=0; i<4; i++)
{
    // Runs 3 times for each row.
    for(j=0; j<3; j++)
    {
        printf("Index [%d][%d] = %d\n",i,j,matrix1[i][j]);
    }
}
    return 0;
}
