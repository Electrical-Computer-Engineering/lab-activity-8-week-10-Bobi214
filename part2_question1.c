#include <stdio.h>
#include <stdlib.h>

int my_strcomp(char str1[], char str2[])
{
    int i;
    for(i = 0; str1[i] != '\0' && str2[i] != '\0';i++)
    {
        if(str1[i] > str2[i] || str1[i] < str2[i])
        {
            return 1;
        }
    }
    if((str1[i] != '\0' && str2[i] == '\0') || (str1[i] == '\0' && str2[i] != '\0'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int my_strncmp(char str1[], char str2[], int n)
{
    int i;
    for(i = 0; i < n;i++)
    {
        if(str1[i] > str2[i] || str1[i] < str2[i])
        {
            return 1;
        }
        else if((str1[i] != '\0' && str2[i] == '\0') || (str1[i] == '\0' && str2[i] != '\0'))
        {
            return 1;
        }
    }
    return 0;
}
char* my_strcpy(char str1[],char str2[])
{
    int i;
    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[i] = str2[i];
    }
    str1[i] = '\0';
    return str1;
}

char* my_strcat(char str1[],char str2[])
{
    int i,n;
    for (i = 0; str1[i] != '\0'; i++)
    {
        n = i;
    }
    n++;
    for(i = 0; str2[i] != '\0'; i++)
    {
        str1[n] = str2[i];
        n++;
    }
    str1[n] = '\0';
    return str1;
}

char* my_reverse(char str1[],char str2[])
{
    int i, n;
    char temp;
    for(i = 0; str2[i] != '\0'; i++)
    {
        n = i;
    }
    n++;
    for(i = 0; i < (n / 2); i++)
    {
        temp = str2[i];
        str2[i] = str2[n - 1 - i];
        str2[n - 1 - i] = temp;
    }
    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[i] = str2[i];
    }
    str1[i] = '\0';
    return str1;
    
}

int main()
{
    int num, a, b, i;
    char s1[32],s2[32],c[32], d[32], e[32];  
    for(i = 0; i < 2; i++) 
    {
        printf("Enter S1: \n");
        scanf("%s",&s1);getchar();
        printf("Enter S2: \n");
        scanf("%s",&s2);getchar();
        printf("Enter a number: \n");
        scanf("%d", &num);getchar();
    
        a = my_strcomp(s1,s2);
        b = my_strncmp(s1,s2,num);
        my_strcpy(s1,s2);
        printf("String Comapre:%d\n",a);
        printf("String n Compare:%d\n",b);
        printf("Copy string 2 to 1:%s\n",s1);
        printf("Enter another string:\n");
        scanf("%s",&c);getchar();
        printf("Enter another string:\n");
        scanf("%s",&d);getchar();
        my_strcat(c,d);
        printf("Adding 2 to 1: %s\n",c);
        printf("Enter a new string:\n");
        my_reverse(c,d);
        printf("Reversing 2nd string: %s\n",c);
    }
    
    
}

