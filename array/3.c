//4行4j列数组，求每列和，放第5行。

#include<stdio.h> 
#define M 5
#define N 4
int main()
{
	int arr[M][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12},
{13,14,15,16},{0,0,0,0}};
	int i,j;
	for(j=0;j<N;j++)
		for(i=0;i<M-1;i++)
			arr[M-1][j]+=arr[i][j];
	for(j=0;j<N;j++)
		printf("%d ",arr[M-1][j]);
	printf("\n");
	return 0;
}

