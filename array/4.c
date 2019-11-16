//  http://1t.click/bfu6

#include<stdio.h>
#define M 5
#define N 4
int main()
{
	int a[M][N];
	int i,j,maxj,count=0,flag;
	printf("请输入%d*%d阶矩阵A：\n",M,N );
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]); 
	for(i=0;i<M;i++)
	{
		maxj=0;
		for(j=1;j<N;j++)		/*找到第i行中最大的那个元素的列下标*/
			if(a[i][maxj]<a[i][j])	
				maxj=j;
		flag=1;
		/*定位第maxj列，看看a[i][maxj]是否是该列中最小的那个元素
		  如果是不是，则flag为0；如果是，则flag保持为1*/
		for(j=0;j<M;j++)	
			if(a[j][maxj]<a[i][maxj])		
flag=0;
		if(flag==1)
		{
			count++;
			printf("第%d个鞍点:a[%d][%d]=%d\n",
count,i,maxj,a[i][maxj]);
		}
	}
	if(count==0)
		printf("没有鞍点");
    return 0;
}

4.
#include<stdio.h>
#define N 40
int main()
{
	char str[N],i,j=0,iMax,max,count;
	char insertStr[5]={'(','m','a','x',')'};
	printf("输入一个字符串：");
	gets(str);
	count=strlen(str);
	max=str[0]; /*假设字符串的第一个字符最大*/
	iMax=0;     /*字符串中最大字符的下标置为0*/
	for(i=1;i<count;i++)
		if(str[i]>max)
		{
			max=str[i];/*字符串中最大的字符存放到max中*/
			iMax=i;    /*字符串中最大的字符的下标存放到iMax中*/
		}
	/*字符串最大的字符后的字符依次往后移动5个字符*/
	for(i=count-1;i>iMax;i--)
		str[i+5]=str[i];
	/*字符串最大的字符后插入字符串“(max)”*/
	for(i=iMax+1;i<=iMax+5;i++)
	{
		str[i]=insertStr[j];
		j++;
	}
	/*新串的末尾加上\0*/
	str[count+5]='\0';
	puts(str);
    return 0;
}
运行结果：
MyFriend↙
My(max)Friend

5.
#include<stdio.h>
#define M 40
#define N 20
int main()
{
	char strA[M],strB[N],cntB,i=0,j=0;
	printf("请输入字符串a：");
	gets(strA);
	printf("请输入字符串b：");
	gets(strB);
	cntB=strlen(strB);
	/*找到a串的末尾*/
	while(strA[i]!='\0')
		i++;	
	if(cntB<5)
	{

		/*将b串的所有字符都连接到a串末尾*/
		while(strB[j]!='\0')
		{
			strA[i+j]=strB[j];
			j++;
		}
	}
	else
	{
		/*将b串的前5个字符连接到a串末尾*/
		while(j<5)
		{
			strA[i+j]=strB[j];
			j++;
		}
	}
	/*新串的末尾加上串结束标志\0*/
    strA[i+j]='\0';
	puts(strA);
    return 0;
}
运行结果：
（1）测试数据一：
请输入字符串a：hubei↙
请输入字符串b：wuhan↙
hubeiwuhan
（2）测试数据二：
请输入字符串a：shanxi↙
请输入字符串b：xian↙
hubeiwuhan

6.略

7.
#include <stdio.h>
#define N 6	
int main()
{

	/*学生的学号数组*/
	char num[N][9]={"99077101","99077102","99077103","99077104",
"99077105","99077106"},tmpNum[9];
	/*学生的姓名数组*/
	char name[N][8]={"张红","王建","王连","李立","刘虹",
"丁平"},tmpName[8];
	/*学生的四门课程数组*/
	int score[N][4]={{85,90,92,88},{90,95,95,90},{76,78,80,70},
{56,36,66,97},{78,79,87,89},{89,79,70,87}},tmpScore;
	int sum[N],i,j,k;
	float aver[N],tmpAver;    /*学生平均分数组*/

	/*求每个学生4门课程成绩的总分sum和平均分ave*/
	for(i=0;i<N;i++)
	{
		sum[i]=0;     /*每个学生4门课程成绩总分置0*/
		for(j=0;j<4;j++)
			sum[i]+=score[i][j];
		aver[i]=(float)sum[i]/4;
	}

	/*用冒泡排序法将学生信息按升序排序*/
	for(i=1;i<N;i++)
		for(j=0;j<N-i;j++)
		{
			if(aver[j]>aver[j+1])
			{
				/*交换平均成绩*/
				tmpAver=aver[j];
				aver[j]=aver[j+1];
				aver[j+1]=tmpAver;

				/*交换学号*/
				strcpy(tmpNum,num[j]);
				strcpy(num[j],num[j+1]);
				strcpy(num[j+1],tmpNum);

				/*交换姓名*/
				strcpy(tmpName,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],tmpName);
			
				/*交换成绩*/
				for(k=0;k<4;k++)
				{
					tmpScore=score[j][k];
					score[j][k]=score[j+1][k];
					score[j+1][k]=tmpScore;
				}
			}
		}

	/*按格式输出学生所有信息*/
	printf("  学号\t        姓名\t 数学\t 物理\t 英语\t计算机\t
平均成绩\n");
	for(i=0;i<N;i++)
	{
		printf("%s\t%s\t",num[i],name[i]);  /*输出学号和姓名*/
		for(j=0;j<4;j++)
			printf("%4d\t",score[i][j]);	/*输出4科成绩*/
		printf("%6.1f\n",aver[i]);			/*输出平均分*/
	}	
	return 0;
}


