#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    //Problem: To buy a computer, Raquel borrowed 
    //$3,000 at 9% interest  for 4 years. How much money did she have to pay back?
    //SI = P*R*T
    printf("************WELCOME TO HDFC BANK************\n");
    int principle,time,total;
    float rate,result;
    //char Name[20];
     //printf("Enter your Name Please Mr or Mrs:- ");
   // scanf("%s",Name);
    printf("Enter your principle Amount :-$ ");
    scanf("%d",&principle);
    printf("Enter your Rate Intrest :-");
    scanf("%f",&rate);
    printf("Enter your Time in years:- ");
    scanf("%d",&time);
   
    result=principle*rate*time;
    printf("THE SIMPLE INTREST (%f)",result);
    printf("\n");
    total=result+principle;
    
    printf("Mukund had to pay back $ %d in principal plus $ %f in interest for a total of $%d. \n",principle,result,total);
    printf("****************************************\n");
    //Raquel had to pay back $3,000 in principal plus $1,080 in interest for a total of $4,080.00.
    return 0;
}
