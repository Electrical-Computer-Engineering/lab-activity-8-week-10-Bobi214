#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30
char* my_piglatin(char str[],char pig[])
{
    int i, k, count = 0, j = 0;
    char temp[MAX];
    for(i = 0; i < strlen(str); i++)
        {
            temp[i] = str[i];
        }
        for (i = 0; i < strlen(str); i++)
        {
            if(str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U'|| str[i] == 'u'|| (str[i] == 'y' && i > 0) || (str[i] == 'Y' && i > 0))
            {
                count = i;
                break;
            }
        }
        k = 0;
        for(j = count; j < strlen(str); j++)
        {
            pig[k] = str[j];
            k++;
            str[j] = '_';
        }
        for(i = 0; i < strlen(str); i++)
        {
            if (str[i] >= 'a' && str[i] <='z' || str[i] >= 'A' && str[i] <='Z')
            {
                if(str[i] >= 'A' && str[i] <= 'Z')
                {
                    str[i] = str[i] + ('a' - 'A');
                pig[k] = str[i];
                k++;    
            } 
        }
        if(temp[0] == 'A' || temp[0] == 'E' || temp[0] == 'I' || temp[0] == 'O' || temp[0] == 'U'||temp[0] == 'a' || temp[0] == 'e' || temp[0] == 'i' || temp[0] == 'o' || temp[0] == 'u')
        {
            pig[k] = 'w';
            pig[k+1] = 'a';
            pig[k+2] = 'y'; 
            pig[k+3] = '\0';
        }
        else
        {
            pig[k] = 'a';
            pig[k+1]  = 'y';
            pig[k+2] = '\0';
        }
        if((temp[0] >= 'A' && temp[0] <= 'Z') && (pig[0] >= 'a' && pig[0] <='z'))
        {
            pig[0] = pig[0] - ('a' - 'A');  
        }       
        return pig;
}

