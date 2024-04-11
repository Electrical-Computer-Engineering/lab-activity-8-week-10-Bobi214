#include <stdio.h>
#include <stdlib.h>



void my_shift(char str1[]);
int main()
{
    char word[10];
    printf("Enter a string: \n");
    scanf("%s",word);
    my_shift(word); //Calling function
}
void my_shift(char str1[])
{
    int i = 0,n,k;
    for(i = 0; str1[i] != '\0'; i++)//This finds length of string since we can't use strlen
    {
        n++;
    }
    for(k = 0; k < n; k ++)//This loop will run till all characters are finnished
    {
        for(i = k; i < n; i++)//This starts at k, meaning it will start one letter after the previous loop
        {
            printf("%c",str1[i]);
        }
        printf("\n");
    }
}



