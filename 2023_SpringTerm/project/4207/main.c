#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//将英语转为数字，若以negative开头则为负数


int main()
{
    int i, n;
    scanf("%d", &n);
    char num[1000] = {"\0"};
    char number[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","forty","fifty", "sixty","seventy","eighty","ninety", "hundred", "thousand", "millon"};
    int num[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,30,40,50,60,70,80,90, 100, 1000, 10000};
    while(strcmp(gets(num)) != NULL)
    {
        int sum = 0, flag = 0, n = 0, k, j;
        char str[1005] = {"\0"}, str1[104] = {"\0"}, str2[104] = {"\0"}, word1[10] = {"\0"}, word2[10] = {"\0"};
        char tempstr[100];
        strcat(num[strlen(num)], " ");
        for(j = 0; j < strlen(str); j++)
        {
            if(num[j] == ' ')
            {
                for(k = flag; k < j; k++)
                {
                    temp[n++] = str[k];
                }
            }
            if((num[j] == ' ') && (flag))
            {
                strcpy(str2, str);
            }
    }
    return 0;
    }
}
