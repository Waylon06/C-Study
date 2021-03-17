#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
void putStu();
void searchfor();
void Delete();
void change();
void intput();
void rank();
void total();
struct studnet
{
	int number;    
	char name[20]; 
	float xuanxiu; 
	float bixiu;   
	float shiyan; 
	float all;
} STU[MAX]; 
int n=0;        
void putStu() 
{
	int a;
	for(n=0; n<MAX; n++) 
	{
		
		printf("请输入姓名:");
		scanf("%s",&STU[n].name);
		printf("请输入学号:");
		scanf("%d",&STU[n].number);
		printf("请输入必修成绩:");
		scanf("%f",&STU[n].bixiu);
		printf("请输入选修成绩:");
		scanf("%f",&STU[n].xuanxiu);
		printf("请输入实验成绩:");
		scanf("%f",&STU[n].shiyan);
		STU[n].all=STU[n].bixiu+STU[n].xuanxiu+STU[n].shiyan;
		l:
		printf("是否停止录入学生信息？\n1.是    2.否\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
			system("pause");
	        system("cls");
			return;
			case 2:break;
			default:
		    printf("抱歉，您的输入有误请重新输入\n\n");
		    goto l;
			break; 
		}
	    system("pause");
	    system("cls");
	}
}
void searchfor()
{
	int a,i;
	char N[20];
	printf("您想通过以下哪种方式来查找学生信息\n1、姓名\t2、学号\n");
	scanf("%d",&a);
	switch(a)
	{
	    case 1:
		    printf("请输入要查找的学生姓名：\n");
	        scanf("%s",&N);
	        break;
	    case 2:
		    printf("请输入要查找的学生学号：\n");
	        scanf("%d",&i);
	        break;
	    default:
		    printf("抱歉，您的输入有误\n");
		    break; 
	}
	for(int t=0;t<=n;t++)
	{
		if(strcmp(N,STU[t].name)==0||i==STU[t].number)
		{
		printf("姓名\t\t学号\t\t必修分数\t\t选修分数\t\t实验分数\n");
		printf("%s\t\t%d\t\t%.1f\t\t\t%.1f\t\t\t%.1f\n",STU[t].name,STU[t].number,STU[t].bixiu,STU[t].xuanxiu,STU[t].shiyan);
		}
		else
		{
		}	
	} 
	
	system("pause");
	system("cls");
}
void Delete()
{
	int a,i;
	char N[20];
	l:printf("您想通过以下哪种方式来删除学生信息\n1、姓名\t2、学号\n");
	scanf("%d",&a);
	switch(a)
	{
	    case 1:
		    printf("请输入要删除的学生姓名：\n");
	        scanf("%s",&N);
	        break;
	    case 2:
		    printf("请输入要删除的学生学号：\n");
	        scanf("%d",&i);
	        break; 
	    default:
		    printf("抱歉，您的输入有误请重新输入\n\n");
		    goto l;
			break; 
	}
	for(int t=0;t<=n;t++)
	{
		if(strcmp(N,STU[t].name)==0||i==STU[t].number)
		{
			STU[t]=STU[t+1];
		}
		else
		{
		}
	}
}
void change()
{
	int a,i,t;
	char N[20];
	printf("您想通过以下哪种方式来查找并修改学生信息\n1、姓名\t2、学号\n");
	scanf("%d",&a);
	if(a==1)
	{
		printf("请输入您想修改成绩的学生姓名：");
		scanf("%s",&N);
		for(t=0;t<=n;t++)
		{
			if(strcmp(N,STU[t].name)==0)
			{
		            printf("请输入修改后必修成绩:");
		            scanf("%f",&STU[t].bixiu);
		            printf("请输入修改后选修成绩:");
		            scanf("%f",&STU[t].xuanxiu);
		            printf("请输入修改后的实验成绩:");
		            scanf("%f",&STU[t].shiyan);
		            printf("修改成功！\n");
			}
		}
		system("pause");
	    system("cls"); 
	}
	else if(a==2)
	{
		printf("请输入您想修改成绩的学生学号：");
		scanf("%d",&i); 
		for(t=0;t<=n;t++)
		{
			if(i==STU[t].number)
			{
				printf("请输入修改后必修成绩:");
		        scanf("%f",&STU[t].bixiu);
		        printf("请输入修改后选修成绩:");
		        scanf("%f",&STU[t].xuanxiu);
		        printf("请输入修改后的实验成绩:");
		        scanf("%f",&STU[t].shiyan);
		        printf("修改成功！\n");
			}
		}
		system("pause");
	    system("cls");
	} 
}
void intput()
{
	int a,i,t;
	printf("请输入您想插入的位置：\n");
	scanf("%d",&i);
	n=n+1;
	for(t=i;t<=n;t++)
	{
		STU[t+1]=STU[t];
	}
	printf("请输入插入的学生姓名:");
	scanf("%s",&STU[i].name);
	printf("请输入插入的学生学号:");
	scanf("%d",&STU[i].number);
	printf("请输入插入的学生必修成绩:");
	scanf("%f",&STU[i].bixiu);
	printf("请输入插入的学生选修成绩:");
	scanf("%f",&STU[i].xuanxiu);
	printf("请输入插入的学生实验成绩:");
	scanf("%f",&STU[i].shiyan);
	printf("插入成功！\n");
	system("pause");
	system("cls"); 
}
void rank()
{
	int a,t,i; 
	l:printf("请选择排名方式\n1、学号\t2、总分\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			for(t=0;t<n;t++)
			{
				for(i=0;i<n-t;i++)
				{
				    if(STU[i].number>STU[i+1].number)
				    {
				    	STU[MAX]=STU[i];
				        STU[i]=STU[i+1];
				        STU[i+1]=STU[MAX];  
				    }
			    }
			}			
			printf("姓名\t\t学号\t\t必修分数\t\t选修分数\t\t实验分数\n");
			for(i=0;i<=n;i++)
			{
				printf("%s\t\t%d\t\t%.1f\t\t\t%.1f\t\t\t%.1f\n",STU[i].name,STU[i].number,STU[i].bixiu,STU[i].xuanxiu,STU[i].shiyan);
			}
			break;
		case 2:
		    for(t=0;t<n;t++)
			{
				for(i=0;i<n-t;i++)
				{
					if(STU[i+1].all>STU[i].all)
					{
				    	STU[MAX]=STU[i];
				        STU[i]=STU[i+1];
				        STU[i+1]=STU[MAX];					    
					}
				}
			}
			printf("姓名\t\t学号\t\t必修分数\t\t选修分数\t\t实验分数\n");
			for(i=0;i<=n;i++)
			{
				printf("%s\t\t%d\t\t%.1f\t\t\t%.1f\t\t\t%.1f\n",STU[i].name,STU[i].number,STU[i].bixiu,STU[i].xuanxiu,STU[i].shiyan);
			}
			break;
		default:
			printf("抱歉，您的输入有误请重新输入\n\n");
		    goto l;
			break; 
			 
	}
	system("pause");
	system("cls"); 
} 
void total()
{
	int i;
	printf("姓名\t\t学号\t\t必修分数\t\t选修分数\t\t实验分数\n");
	for(i=0;i<=n;i++)
	{
		printf("%s\t\t%d\t\t%.1f\t\t\t%.1f\t\t\t%.1f\n",STU[i].name,STU[i].number,STU[i].bixiu,STU[i].xuanxiu,STU[i].shiyan);
	}
	printf("总共有%d位学生\n",i);
	system("pause");
	system("cls");
}
int main() 
{ 
  int keydown; 
	while(1)
	{
	printf("\t\t\t\t---------------------STUDENT------------------\n");
	printf("\t\t\t\t|            1、 学生成绩信息录入            |\n");
	printf("\t\t\t\t|            2、 学生成绩信息查询            |\n");
	printf("\t\t\t\t|            3、 学生成绩信息删除            |\n");
	printf("\t\t\t\t|            4、 学生成绩信息修改            |\n");
	printf("\t\t\t\t|            5、 学生成绩信息插入            |\n");
	printf("\t\t\t\t|            6、 学生成绩排名                |\n");
	printf("\t\t\t\t|            7、 学生人数统计                |\n");
	printf("\t\t\t\t|            0、 退出系统                    |\n");
	printf("\t\t\t\t----------------------------------------------\n\n\n");
	printf("请输入您的操作：\n");
	scanf("%d",&keydown);
	if(keydown==0) 
	{
		printf("系统即将关闭");
		return 0;
	} else if(keydown==1) {
		putStu();                             
	} else if(keydown==2) {
		searchfor();                          
	} else if(keydown==3) {
		Delete();                             
	} else if(keydown==4) {
		change();                            
	} else if(keydown==5) {
		intput();                            
	} else if(keydown==6) {
		rank();                             
	} else if(keydown==7) {
		total();                           
	} else {
		printf("您的输入有误！请重新输入！\n");
	}
	}
	return 0;
}
