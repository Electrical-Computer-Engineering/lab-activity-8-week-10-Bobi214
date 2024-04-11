
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30


char* my_remove(char str1[],char str2[],char end[]);
int main()
{
    char s1[MAX],s2[MAX], e[MAX];
    int i = 0;
    printf("Enter a string: \n");
    fgets(s1,MAX,stdin);
    printf("Enter 2nd string: \n");
    fgets(s2,MAX,stdin);
    
    printf("%s",my_remove(s1,s2,e));
}
char* my_remove(char str1[],char str2[],char end[])
{
    int i, n = 0, k = 0, j;
    n = strlen(str1);
    k = strlen(str2);
    for(i = 0; i < k;i++)
    {
        for(j = 0; j < n;j++)
        {
            if(str2[i] == str1[j])
            {
                str1[j] = '_';
            }
        }
    }
    k = 0;
    for(i = 0; i < n;i++)
    {
        if(str1[i] != '_')
        {
            end[k] = str1[i];
            k++;    
        }
    }
    end[k + 1] = '\0';
    return end;
}
