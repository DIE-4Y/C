#include<stdio.h> 


int main()
{
	float c,f;
	freopen("1016.txt", "r", stdin);
	while(scanf("%f", &c) != EOF) 
	{
		f=9 * c / 5.0 + 32;					//���϶�תΪһλС���Ļ��϶� 
		printf("celsius=%.1f,fahr=%.1f\n", c, f);
	}
	return 0;
}
