#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int s1,s2,s3,s4,s5,total;
    float pass;

    printf("Enter your English Numbers :-");
    scanf("%d",&s1);
    
    printf("Enter your Sciencce Numbers :-");
    scanf("%d",&s2);
    printf("Enter your Hindi Numbers :-");
    scanf("%d",&s3);
    printf("Enter your Computers Numbers :-");
    scanf("%d",&s4);
    printf("Enter your CPP Numbers :-");
    scanf("%d",&s5);

    total=(s1+s2+s3+s4+s5)/5;
    printf("Total of 5 subjects are :- (%d/500)\n",total);

    if (total>=90)
    {
        printf("Congratulations .!!!!!!!\nYou scored A Grade.");
    }
    else if (total<90 && total>=70)
    {
         printf("Congratulations .!!!!!!!\nYou scored B Grade.\n");
    }
    
    else if (total<70 && total>=50)
    {
         printf("You scroed second class \nYou scored C Grade.\n");
    }
else if (total<=50 && total>=45)
    {
         printf("Just Pass ...\nYou scored D Grade.\n");

    }
else
{
    printf("You are Failed...\n");
}
        
    return 0;
}
