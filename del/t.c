#include<stdio.h>
#include<stdlib.h>
typedef int datatype;
typedef int TreeData;
typedef struct BinTreeNode
{//结点定义
        TreeData data;
        struct BinTreeNode * leftChild ,* rightchild;
}BinTreeNode ,* BinTree;
typedef struct BiThrNode{
        int ltag;
        int rtag;
        datatype data;
        struct BiThrNode *lchild;
        struct BiThrNode *rchild;
}*BiThrTree;
BiThrTree THRT;
BinTree T;
BinTree creatbitree(BinTree *T)
int main()
{
        int i=1;
        //system("color 4E");
          system("cls");
          welcome();/*欢迎界面*/

          while(i>0)
          {
                  i=menu_select();/*控制菜单*/
                  switch(i)
                  {
                          case 1:creathitree(T);;break;
                          case 2:PostOrder(T);;break;
                          case 3:InOrder(T);;break;
                          case 4:PostOrder(T);;break;
                          case 5:LeafCount(T);;break;

void welcome()
{
        char str1[]="103";
        char str[16];
        int i=0 ,j;
        while(1)
        {
                printf("请输入密码");
                scanf("%s" ,&str);
                for(j=0;j<(sizeof(str1)<sizeof(str)?sizeof(str1):sizeof(str));j++)
                {
                        if(str1[j]!=str[j])
                        {printf("密码错误，请重新输入!\n");
                                i++;
                                break;}
                        if(j<(sizeof(str1)<sizeof(str)?sizeof(str1):sizeof(str))-1)
                        {continue;}
                        printf("密码正确!\n");
                        printf("\t*****^-^*****^-^*****^-^*****^-^*****^-^*****^-^*****\n");
                        printf("\t * ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~   ~   ~ *\n");
                        printf("\t * ~          二叉树的相关操作                  ~ *\n");
                        printf("\t * ~  ~   ~   ~   ~   ~   ~   ~  ~  ~  ~   ~   ~ *\n");
                        printf("\t*****^-^*****^-^*****^-^*****^-^*****^-^*****^-^*****\n");
                        return;
                }
                if(i==3)
                {
                        printf("已输错密码三次，结束程序:\n");
                        exit(0);
                }}}

int menu_select()
{int i;
        printf("&*&*&*&*&*&*&*teacher&*&*&*&*&*&*&*|\n");
        printf("**************welcome*********************|\n");
        printf("*******************************************\n");
        printf("*^_^*^_^*  1. 二叉树的创建      *^_^*^_^*\n\n");
        printf("*^_^*^_^*  2. 二叉树的前序遍历  *^_^*^_^*\n\n");
        printf("*^_^*^_^*  3. 二叉树的中序遍历  *^_^*^_^*\n\n");
        printf("*^_^*^_^*  4. 二叉树的后序遍历  *^_^*^_^*\n\n");
        printf("*^_^*^_^*  5. 二叉树的层次遍历  *^_^*^_^*\n\n");
        printf("*^_^*^_^*  6. 叶子节点数        *^_^*^_^*\n\n");
        printf("*^_^*^_^*  7. 判断该二叉树      *^_^*^_^*\n\n");
        printf("*^_^*^_^*  是否为完全二叉树     *^_^*^_^*\n\n");

        printf("*^_^*^_^*  8.二叉树             *^_^*^_^*\n\n");
        printf("*^_^*^_^*  左右子树交换         *^_^*^_^*\n\n");
        printf("*^_^*^_^*  0.退出程序           *^_^*^_^*\n\n");
        printf("***************************************|\n");
        printf("&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&|\n");
        printf("请键入相应的序号以确认您的选择:");
        scanf("%d" ,&i);
        if(i==0)
        {printf("\t * ~     二叉树的相关操作   ~ *\n");
                printf("\t * ~      欢迎光临            ~ *\n");
        }
        else if(i==1)
        {printf("现在开始建立二叉树 :");
                T=creatbitree(T);
        }
        else if(i==3)
        {printf(("中序递归遍历该二叉树，结果为:");
                        InOrder(T);
                        }
                        else if(i==2)
                        {printf("先序递归遍历该二叉树，结果为:");
                        PostOrder(T);
                        }
                        else if(i==4)
                        {printf("后序递归遍历该二叉树，结果为:");
                        PostOrder(T);
                        }
                        else if(i==5)
                        {
                        printf("层次遍历该二叉树，结果为:");
                        levelorder(T);
                        }
                        else if(i==6)
                        {
                        int sum=LeafCount(T);
                         printf("叶子节点个数：%d" ,sum);
                         }
        else if(i==7)
        {

                LevelOrder1(T);
                 if(sign==1)
                 {     printf( "这不是一个完全二叉树\n ");
                 }
        else
        {  printf( "这不是一个完全二叉树\n ");
        }
        else if(i==8)
        {
                PreOrderTraverse(T);
        }
        else
        {
                printf("输入选择错误！请重新输入\n ");
        }
        return 0;

}
BinTree creatbitree(BinTree &T)
{TreeData ch;
        printf( "\n  i ,data=   ");
        scanf("%1s" ,&ch);
        if(ch=='#')
                T=NULL;
        else
        {if(!(T=(BinTreeNode*)malloc(sizeof(BinTreeNode))))
                printf("ERROR!");
                T->data=ch;
                creatbitree(T->leftChild);
                creatbitree(T->rightchild);
        }
        return T;}
        void PreOrder(BinTree *T)//先序遍历
{
        if(T!=NULL)
        {
                printf("%c" ,T->data);
                PreOrder(T->leftChild);
                PreOrder(T->rightchild);
        }
}
void InOrder(BinTree &T)//中序遍历
{
        if(T!=NULL)
        {
                InOrder(T->leftChild);
                printf("%d" ,T->data);
                InOrder(T->rightchild);
        }
}
void PostOrder(BinTree &T)//后序遍历
{
        if(T!=NULL)
        {
                PostOrder(T->leftChild);
                PostOrder(T->rightchild);
                printf("%d" ,T->data);
        }
}
void levelorder(Bintree bt)//层次遍历
{LKQue Q;Bintree p;
        InitQueue(&Q);
        if(bt!=NULL)
        {EnQueue(&Q ,bt);
                while(!EmptyQueue(&Q))
                         {p=GetHead(&Q);
                                OutQueue(&Q);
                                Visit(p);
                                 if(p->lchild!=NULL)  EnQueue(&Q ,p->lchild);
                                if(p->rchild!=NULL)  EnQueue(&Q ,p->rchild);
                        }}
}
int LeafCount(BinTree &T)
{
        int sum=0 ,m ,n;
        if(T){
                if((!T->leftChild)&&(!T->rightchild))
                        sum++;
                m=LeafCount(T->leftChild);
                sum+=m;
                n=LeafCount(T->rightchild);
                sum+=n;
        }
        return sum;
}
int LevelOrder1(BinTree &T)
{   BiTree stack[MAXSIZE];
        BinTree p;
        int front ,rear;
        front=-1 ,rear=0;
        stack[rear]=T;
        while(rear!=front)
        { front++;
                p=stack[front];
                if((p->left_child==NULL)&&(p->right_child))
                        sign=1;
                if(p->left_child)
                {   rear++;
                         stack[rear]=p->left_child;}
                if(p->right_child)
                {rear++;
                        stack[rear]=p->right_child  } }
        return 1;}
        BiTNode (BinTree &T)
{
        BiTNode *t ,*t1 ,*t2;
        if(T==NULL) t=NULL;
        else
        {
                t=(BiTNode *)malloc(sizeof(BiTNode));
                t->data=T->data;
                t1=swap(T->left_child);
                t2=swap(T->right_child);
                t->left_child=t2;
                 t->right_child=t1;
        }
        return(t);
}
