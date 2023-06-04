#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("8001.txt", "r", stdin);
    int i,rgb[16][3] = {0}, temp[3] = {0}, pos = 0, min = 0, d = 0;
    for(i = 0 ;i < 16; i++)
    {
        scanf("%d %d %d", &rgb[i][0], &rgb[i][1], &rgb[i][2]);
    }
    while(1)
    {
        scanf("%d %d %d", &temp[0], &temp[1], &temp[2]);
        if(temp[0] == -1 && temp[1] == -1 && temp[2] == -1)
            break;
        min = (temp[0] - rgb[0][0])*(temp[0] - rgb[0][0]) + (temp[1]-rgb[0][1])*(temp[1]-rgb[0][1])+(temp[2]-rgb[0][2])*(temp[2]-rgb[0][2]);
        for(i = 1; i < 16; i++)
        {
            d = (temp[0] - rgb[i][0])*(temp[0] - rgb[i][0]) + (temp[1]-rgb[i][1])*(temp[1]-rgb[i][1])+(temp[2]-rgb[i][2])*(temp[2]-rgb[i][2]);
            if(d < min)
            {
                min = d;
                pos = i;
            }
        }
        printf("(%d,%d,%d) maps to (%d,%d,%d)\n",temp[0],temp[1],temp[2],rgb[pos][0],rgb[pos][1],rgb[pos][2]);
    }
    return 0;
}
