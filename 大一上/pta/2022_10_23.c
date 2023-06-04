#include<stdio.h>

int main()
{
	float a,b,z;
	char tool;
	scanf("%f%c%f",&a,&tool,&b);
	switch(tool)
	{
		case'+':z=a+b;printf("%.2f",z);break;
		case'-':z=a-b;printf("%.2f",z);break;
		case'*':z=a*b;printf("%.2f",z);break;
		case'/':if(b==0)
				printf("The divisor is 0.");
			else
			{
				z=a/b;
				printf("%.2f",z);
			}
	}
	return 0; 
}
