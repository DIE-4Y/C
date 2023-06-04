#include<stdio.h>
//装箱问题，将1,2,3,4,5,6平凡大小的装进6*6的箱子里
//每一行代表一个订单
//每个订单里的一行包括六个整数
//从小到大分别为这6种产品的数量



int main()
{
    freopen("3007.txt", "r", stdin);
	while(1)
	{
		int i, j, a[7] = {0}, count = 0, out_flag = 0, left2 = 0, left1 = 0;//left2表示需要的边长为2的个数，left1表示需要的边长为1的个数
		for(i = 1; i <= 6; i++)
		{
			scanf("%d", &a[i]);
			if(a[i] == 0)
				out_flag++;
		}
		if(out_flag == 6)
			break;
		count += a[6] + a[5] +a[4] + (a[3] + 3) / 4;//6,5，4,边长的只要有一个就得用一个盒子
		left1 += 11*a[5]; left2 = a[4]*5; left1 += 16;//边长为3的个数如果加上3除4有数就得加一个，否则就不用加
		if(a[3] % 4 == 1)//判断边长为3的剩下的格子需要多少个边长为2和边长为1的盒子
		{
			left2 += 5; left1 += 27;
		}
		else if(a[3] % 4 == 2)
		{
			left2 += 3; left1 += 18;
		}
		else if(a[3] % 4 == 3)
		{
			left2 += 1; left1 += 9;
		}
		if(left2 >= a[2])//判断需要的边长为2的盒子是否多于给的盒子
		{
			a[2] = 0; left1 -= a[2]*4;
		}
		else
		{
			a[2] -= left2; left1 -= left1*4; count += (a[2]+8)/9; left1 += 36-(a[2] % 9)*4;
		}
		if(left1 < a[1])
		{
			a[1] -= left1; count += (a[1]+35)/36;
		}
		printf("%d\n", count);
	}
	return 0;
}
