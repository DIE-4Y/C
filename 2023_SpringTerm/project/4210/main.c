#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//»ØÎÄºÍ¾µÏñ×Ö·û


int main()
{
    freopen("4210.txt", "r", stdin);
    char str[25] = {"\0"};
    while(scanf("%s", str) != EOF)
    {
        printf("%s -- is ", str);
        int i, j, flag_h = 0, flag_m = 0;
        char temp_a[25] = {"\0"}, temp_b[25] = {"\0"};
        strcpy(temp_b, str);
        for(i = 0; i < strlen(str); i++)
        {
            temp_a[strlen(str) - i - 1] = str[i];
            switch(temp_b[i])
                {
                    case 'E': temp_b[i] = '3';break;
                    case 'L': temp_b[i] = 'J';break;
                    case 'J': temp_b[i] = 'L';break;
                    case 'S': temp_b[i] = '2';break;
                    case 'Z': temp_b[i] = '5';break;
                    case '2': temp_b[i] = 'S';break;
                    case '3': temp_b[i] = 'E';break;
                    case '5': temp_b[i] = 'Z';break;
                }
        }
        if(!strcmp(str, temp_a))
            flag_h = 1;
        if(!strcmp(temp_a, temp_b))
            flag_m = 1;
        if(flag_h && flag_m)
            printf("a mirrored palindrome.\n");
        if(flag_h && !flag_m)
            printf("a regular palindrome.\n");
        if(!flag_h && flag_m)
            printf("a mirrored string.\n");
        if(!flag_h && !flag_m)
            printf("not a palindrome.\n");
        printf("\n");
    }
    return 0;
}
