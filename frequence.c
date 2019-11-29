#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    char str[100],ch;
    int f=0,i;
    printf("Enter a string: ");
    gets(&str);
    printf("Enter a character to find the frequency: ");
    scanf("%c",&ch);
   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++f;
   }
   printf("Frequency of %c = %d\n", ch, f);

    return 0;
}
