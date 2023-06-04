#include<stdio.h>
//自定义函数来交换两个数
 
void swap(int* , int*);	

int main()
{	
	
	int a,b;
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("%d %d\n",a,b);
	return 0;
}

void swap(int* pa , int* pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp; 
}
