#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
    freopen("5202.txt", "r", stdin);
    int n, i = 0;
    scanf("%d", &n);
    char str[10001] = {"\0"};
    char num[2501] = {"\0"};
    while(n--)
    {
        scanf("%s", str);
        int len, j, flag = 0, sum = 0, weight = 1;
        len = strlen(str);
        for(len--; len >= 0; len--)
        {
            int ret = str[len] - '0';
            ret *= weight;
            weight *= 2;
            sum += ret;
            flag++;
            if((flag == 4) || (len == 0))
            {
                if(sum < 10)
                    num[i++] = '0'+sum;
                else
                {
                    switch(sum)
                    {
                        case 10: num[i++] = 'A'; break;
                        case 11: num[i++] = 'B'; break;
                        case 12: num[i++] = 'C'; break;
                        case 13: num[i++] = 'D'; break;
                        case 14: num[i++] = 'E'; break;
                        case 15: num[i++] = 'F'; break;
                    }
                }
                sum = 0;
                flag = 0;
                weight = 1;
            }
        }
        for(i--; i >= 0; i--)
        {
            printf("%c", num[i]);
            num[i] = '\0';
        }
        i = 0;
        printf("\n");
    }
    return 0;
}



//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//
//
//int main()
//{
//    freopen("5202.txt", "r", stdin);
//    int n;
//    scanf("%d", &n);
//    while(n--)
//    {
//        int sum = 0,weight = 1, num, i = 0, ret, flag = 0;
//        char str[10000] = {"\0"};
//        scanf("%d", &num);  //因为为字符串，所以不能用数字输入
//        while(num > 0)
//        {
//            flag++;
//            ret = num % 2;
//            num /= 10;
//            sum += ret * weight;
//            weight *= 2;
//        }
//        while(sum > 0)
//        {
//            ret = sum % 16;
//            sum /= 16;
//            if(ret > 9)
//            {
//                str[i++] = 'A' + ret - 10;
//            }
//            else
//            {
//                str[i++] = '0' + ret;
//            }
//        }
//        for(i--; i >= 0; i--)
//            printf("%c", str[i]);
//        printf("\n");
//    }
//    return 0;
//}








//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////2进制转化为16进制



//int main()
//{
//    int n;
//    freopen("5202.txt", "r", stdin);
//    scanf("%d", &n);
//    while(n--)
//    {
//        int i, ret, t;
//        scanf("%d", &ret);
//        char num[10000] = {"\0"};
//        for(i = 0; ret != 0; i++)
//        {
//            int j, len = strlen(num);   //strset(num,'\0')可以直接把num全变成'\0'
//            for(j = 0; j < len; j++)
//                num[i] = '\0';
//            t = ret % 10000;
//            ret /= 10000;
//            switch(t)
//            {
//                case 0: num[i] = '0';break;
//                case 1: num[i] = '1';break;
//                case 10: num[i] = '2';break;
//                case 11: num[i] = '3';break;
//                case 100: num[i] = '4';break;
//                case 101: num[i] = '5';break;
//                case 110: num[i] = '6';break;
//                case 111: num[i] = '7';break;
//                case 1000: num[i] = '8';break;
//                case 1001: num[i] = '9';break;
//                case 1010: num[i] = 'A';break;
//                case 1011: num[i] = 'B';break;
//                case 1100: num[i] = 'C';break;
//                case 1101: num[i] = 'D';break;
//                case 1110: num[i] = 'E';break;
//                case 1111: num[i] = 'F';break;
//            }
//        }
//        for(i--; i >= 0; i--)
//            printf("%c", num[i]);
//        printf("\n");
//    }
//    return 0;
//}

