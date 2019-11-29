#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int i,n,sum=0;
    printf("Enter you number :- ");
    scanf("%d",&n);

    for (i = 0; i < n+1; i++)
    {
        /* code */
        sum +=i;
        
    }
    
printf("\nSum of all Natureal number is :- %d",sum);
printf("\n");
    return 0;
}
