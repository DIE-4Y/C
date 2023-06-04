#include<stdio.h> 
#include<math.h>
//棋盘下的距离
 

int main() 
{
	int t, i;
	freopen("3004.txt", "r", stdin);
	scanf("%d", &t);
	for(i = 1; i <= t; i++)
	{
		getchar();
		char start, target, k;
		int st, ta;
		scanf("%c%d %c%d", &start, &st, &target, &ta);
		int zuo, shang, zuo1, zuo2;
		zuo = abs(start - target);
		shang = abs(st - ta);
		if(!shang && !zuo)
		{
			printf("0 0 0 0\n");continue;
		}
		if(shang > zuo)		
			printf("%d ",shang); 					//王先斜着走，再横着或竖着走 
		else
			printf("%d ",zuo);
		if(!shang || !zuo || shang == zuo)				//后 
			printf("1 ");
		else
			printf("2 ");
		if(!shang||!zuo)							//车 
			printf("1 ");
		else
			printf("2 ");
		if(shang == zuo)
			printf("1\n");
		else if((shang+zuo)%2 == 0)
			printf("2\n");							//象通过斜着走也能走到直线上
		else
			printf("Inf\n");
	}
	return 0;
}
