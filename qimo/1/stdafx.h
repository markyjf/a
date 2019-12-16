typedef struct score 			//成绩   
{
     int score_c;			//C语言成绩
     int score_math;			//高等数学成绩
     int score_english;			//大学英语成绩
}Score;

typedef struct Student  
{  
   char name[100]; 		//姓名 
   char num[100]; 		 //学号  
   char sex;			//性别 (m代表女生f代表男生)  
   int age;			//年龄  
   Score score;			//成绩  
}stu;  

typedef struct LNode  
{  
    stu data; 
    struct LNode *next;  
}LinkList; 

