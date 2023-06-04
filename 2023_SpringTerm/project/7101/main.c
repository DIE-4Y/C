#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 201

int  m1 = 0, m2 = 0;
int r1 = 0, r2 = 0, r3 = 0;


void cmdA()
{
    r1 = m1;
}

void cmdB()
{
    r2 = m2;
}

void cmdC()
{
    m1 = r3;
}

void cmdD()
{
    m2 = r3;
}

void cmdE()
{
    r3 = r1 + r2;
}

void cmdF()
{
    r3 = r1 - r2;
}


int main()
{
    freopen("7101.txt", "r", stdin);
    while(scanf("%d %d ", &m1, &m2) != EOF)
    {
        char str[MAX] = {"\0"};
        gets(str);
        int i, len = strlen(str);
        for(i = 0; i < len; i++)
        {
            if(str[i] == 'A')
                cmdA();
            else if(str[i] == 'B')
                cmdB();
            else if(str[i] == 'C')
                cmdC();
            else if(str[i] == 'D')
                cmdD();
            else if(str[i] == 'E')
                cmdE();
            else
                cmdF();
        }
        printf("%d,%d\n", m1, m2);
        r1 = 0; r2 = 0; r3 = 0;
    }
    return 0;
}
