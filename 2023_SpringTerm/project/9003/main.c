#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 101

int main()
{
    freopen("9003.txt", "r", stdin);
    char num1[MAX] = {"\0"}, num2[MAX] = {"\0"};
    int result[MAX] = {0};
    while(scanf("%s %s", num1, num2) != EOF)    //由于有多组数据读取需要用EOF判断
    {                                           //由于太长且含有字母必须用字符串读入
        int i, len1 = strlen(num1), len2 = strlen(num2), jw = 0;
        for(i = 0, len1--, len2--; len1 >= 0 && len2 >= 0; len1--, len2--, i++)
        {                                               //对两个字符串进行处理处理到短的被处理完为止
            int ret = 0;
            if(num1[len1] >= '0' && num1[len1] <= '9')  //判断每一位是0~9还是a~j
                ret += num1[len1] - '0';                //将对应的大小加到ret中
            else
                ret += num1[len1] - 'a' + 10;
            if(num2[len2] >= '0' && num2[len2] <= '9')
                ret += num2[len2] - '0';
            else
                ret += num2[len2] - 'a' + 10;
            ret += jw;                                  //ret每次都必须加上进位，这步很关键不能忘
            if(ret >= 20)                               //比较ret是否有进位
            {                                           //并对进位进行赋值留给后边使用
                jw = 1;
            }
            else
            {
                jw = 0;
            }
            result[i] = ret % 20;                       //将结果取模加到结果数字数组上
        }                                               //由于有对进位的操作取模之后得到的就是这一位的正确值
        if(len1 >= 0)                                   //对长的未处理完的进行处理
        {
            for(; len1 >= 0; len1--, i++)               //相加方法同上但是由于另一个被处理完了不用加上另外一个的数
            {
                int ret = 0;
                if(num1[len1] >= '0' && num1[len1] <= '9')
                    ret += num1[len1] - '0';
                else
                    ret += num1[len1] - 'a' + 10;
                ret += jw;
                if(ret >= 20)
                {
                    jw = 1;
                }
                else
                {
                    jw = 0;
                }
                result[i] = ret % 20;
            }
        }
        else if(len2 >= 0)
        {
            int ret = 0;
                if(num2[len2] >= '0' && num2[len2] <= '9')
                    ret += num2[len2] - '0';
                else
                    ret += num2[len2] - 'a' + 10;
                ret += jw;
                if(ret >= 20)
                {
                    jw = 1;
                }
                else
                {
                    jw = 0;
                }
                result[i] = ret % 20;
        }
        if(jw)                  //如果最后还有进位最多导致最大位之前多加上一
        {                       //所以直接输出1
            printf("1");
        }                       //否则最高位前没有不用进行处理
        for(i--; i>= 0; i--)    //倒叙将存储的进行输出注意大于9的要用字符输出
        {                       //最后还要换行
            if(result[i] <= 9)
                printf("%d", result[i]);
            else
                printf("%c", result[i] + 'a' - 10);
        }
        printf("\n");
    }
    return 0;
}
