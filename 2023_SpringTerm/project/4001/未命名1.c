#include <stdio.h>
#include <string.h>


int main()
{
    int num = 0;
    char word[85];
    freopen("4001.txt", "r", stdin);
    while(scanf("%s", word) != EOF)
    {
        int len = strlen(word);
        if(0 == strcmp(word, "<br>")) 
        {
            printf("\n\n"); num = 0;
        }
        else if(0 == strcmp(word,"<hr>"))
        {
            if(num)
            	printf("\n");
			int n = 80;
            while(n--)
                printf("-");
            printf("\n");
        }
        else
        {
            if(num + len > 80)
            {
                num = 0;
                printf("\n");
            }
            num+=(len + 1);
            printf("%s", word);
        }
    }
    return 0;
}

