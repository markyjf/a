//定义一个含30整型数组，按顺序分别赋予从2开始的偶数；每5个数求一个平均值，放在另一个数组中并输出。

#include<stdio.h> 
#define N 30
int main()
{
	int array[N],i,j,sum=0;
	float arrAver[6];
	for(i=0;i<N;i++)
		array[i]=2*(i+1);
	for(i=0;i<6;i++)
	{
		/*按顺序求5个数的和*/
		for(j=0;j<5;j++)
			sum+=array[5*i+j];
		/*求5个数的平均值*/
		arrAver[i]=sum/5.0;
	}
	for(i=0;i<6;i++)
		printf("%.2f ",arrAver[i]);
	printf("\n");
	return 0;
}

