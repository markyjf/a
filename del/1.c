#include <stdio.h>	
#include <stdlib.h>           	
#include <string.h>
#define  MAX_GOODS  30        //最大商品数 

typedef struct _goods{
void goods_scanf(int n);
void goods_printf(int n);
int goods_find_name(int n);
int goods_find_price(int n);
void goods_sort_price(int n);
void goods_sort_sum(int n);
int goods_alter_price(int n);
int goods_alter_name(int n);
int goods_delete_price(int n);
int goods_delete_name(int n);
//全局数组变量，用于存储商品信息 
char names[MAX_GOODS][50];
int price[MAX_GOODS];
int surpluse[MAX_GOODS];
int add[MAX_GOODS];
int sum[MAX_GOODS];
//以下变量用于商品信息数组排序，作为临时数组 
char temp_names[MAX_GOODS][50];
int temp_price[MAX_GOODS];
int temp_surpluse[MAX_GOODS];
int temp_add[MAX_GOODS];
int temp_sum[MAX_GOODS];
//sort数组存储排好序的价格或名称下标 
int sort[MAX_GOODS];
} Goods;


void goods_scanf(int n);
void goods_printf(int n);
int goods_find_name(int n);
int goods_find_price(int n);
void goods_sort_price(int n);
void goods_sort_sum(int n);
int goods_alter_price(int n);
int goods_alter_name(int n);
int goods_delete_price(int n);
int goods_delete_name(int n);
//全局数组变量，用于存储商品信息 
char names[MAX_GOODS][50];
int price[MAX_GOODS];
int surpluse[MAX_GOODS];
int add[MAX_GOODS];
int sum[MAX_GOODS];
//以下变量用于商品信息数组排序，作为临时数组 
char temp_names[MAX_GOODS][50];
int temp_price[MAX_GOODS];
int temp_surpluse[MAX_GOODS];
int temp_add[MAX_GOODS];
int temp_sum[MAX_GOODS];
//sort数组存储排好序的价格或名称下标 
int sort[MAX_GOODS];
//循环全局变量 
int i, j;
//main主函数
int main(void)
{    
int choice,n;    
while (1)    
{
        printf("\t*******************************************   \n");
        printf("\t*       自动售货机后台管理系统            *   \n");
        printf("\t*     [1]  输入商品信息                   *   \n");
        printf("\t*     [2]  输出所有商品信息               *   \n");
        printf("\t*     [3]  按价格查找某个商品信息         *   \n");
        printf("\t*     [4]  按名称查找某个商品信息         *   \n");
        printf("\t*     [5]  按价格对商品排序               *   \n");
        printf("\t*     [6]  按总库存对商品排序             *   \n");
        printf("\t*     [7]  按价格修改某个商品信息         *   \n");
        printf("\t*     [8]  按名称修改某个商品信息         *   \n");
        printf("\t*     [9]  按价格删除某个商品信息         *   \n");
        printf("\t*     [10] 按名称删除某个商品信息         *   \n");
        printf("\t*     [0]  退出程序                       *   \n");
        printf("\t*******************************************   \n");  
        printf("      \t请输入您的选择（0 - 10）:");           
        scanf("%d",&choice);

        switch (choice)
        {
        case 1://录入;
            printf("请输入录入的商品个数： ");
            scanf("%d",&n); 
            goods_scanf(n);
            break;
        case 2://输出;
            goods_printf(n);
            break;
        case 3://根据价格查找
            goods_find_price(n);
            break;
        case 4://根据名称查找
            goods_find_name(n);
            break;
        case 5://按价格排序
            goods_sort_price(n);
            break;
        case 6://按名称排序 
            goods_sort_sum(n);
            break;
        case 7://按价格修改 
            goods_alter_price(n);
            break;
        case 8://按名称修改 
            goods_alter_name(n);
            break;
        case 9://按价格删除 
            goods_delete_price(n);
            n--;
            break;
        case 10://按名称删除 
            goods_delete_name(n);
            n--;
            break;
        case 0://退出程序 
            printf("退出程序\n");
            printf("程序结束，谢谢使用!\n");
            exit(0);
        default:
            printf("您输入的菜单有误。请重新输入！\n");
        }
    }
    return 0;
}

//1.输入信息
void goods_scanf(int n)
{
    for (i = 0; i<n; ++i)
    {
        printf("\n请输入第%d个商品的信息:\n", i + 1);
        printf("\n名称:");
        scanf("%s", names[i]);
        printf("\n价格:");
        scanf("%d", &price[i]);
        printf("\n当前余量:");
        scanf("%d", &surpluse[i]);
        printf("\n添加货量:");
        scanf("%d", &add[i]);
        //计算总库存
        sum[i] = surpluse[i] + add[i] ;
    }
}

//2.输出信息        
void goods_printf(int n)
{

    printf("\t名称\t价格\t当前余量\t添加货量\t总库存\n");
    printf("\t------------------------------------------------------\n");
    for (i = 0; i<n; ++i)
    {
        printf("\t%s\t %d\t %d\t\t %d\t\t %d\t\n",names[i], price[i], surpluse[i], add[i], sum[i]);
    }
    printf("\t------------------------------------------------------\n");
}

//3.按价格查找
int goods_find_price(int n)
{
    int prices;
    int result;
    printf("请输入待查找的商品价格:\n");
    scanf("%d",&prices);
    result= -1;
    for (i = 0; i<n; ++i)
    {
        if (prices == price[i])
        {
            result = i;
            break;
        }
    }
    //最后判断q值
    if (result == -1)
    {
        printf("没有该商品信息!\n");
        return 0;
    }
    //打印出查找结果!
    else
    goods_printf(n);
    return 1;
}}
