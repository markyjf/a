#include<stdio.h>
#define N 5
int main()

{
	float score[N],temp;
	int i,j,min;

	printf("输入%d个学生的成绩：\n",N);
	for(i=0;i<N;i++)
			scanf("%f",&score[i]);
		printf("排序前的成绩：\n");
		for(i=0;i<N;i++)
			printf("%7.2f",score[i]);
		printf("\n");
		for(i=0;i<N;i++)
		{
			min=i;
			for(j=i+1;j<N;j++)
			if(score[j]<score[min])
				min=j;

			if(min!=i)
			{
				temp=score[i];
				score[i]=score[min];
				score[min]=temp;
				}
		}
			printf("排序后的成绩：\n");
			for(i=0;i<N;i++)
				printf("%7.2f",score[i]);
			printf("\n");
			return 0;

}
				
