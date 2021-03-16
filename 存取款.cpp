#include<stdio.h>
#include<windows.h>
void save();							/*存钱函数*/
void draw();					/*取钱函数*/
double count,balance=0;							/*全局变量，表示账户余额*/
/******************************主函数*****************************/
int main()
{
	int a;
	while(1)							/*使用循环结构完成菜单循环*/
	{							/*菜单不显示隐藏功能*/ 
		printf("\t\t\t\t\t|--------存钱取钱程序菜单-------|\n");
		printf("\t\t\t\t\t|\t1:存钱\t\t\t|\n");
		printf("\t\t\t\t\t|\t2:取钱\t\t\t|\n");
		printf("\t\t\t\t\t|\t0:退出\t\t\t|\n");
		printf("\t\t\t\t\t|-------------------------------|\n");
		printf("请选择您所需要选择的业务(0-2)\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:save();break;
			case 2:draw();break;
			case 0:printf("服务关闭");
			    return 0;
			    break; 
			default:
				printf("抱歉您的输入有误，请重新输入");
				break; 
		}
		//补充程序


	}
	return 0;
}
/**************************存钱处理函数************************/
void save()
{
	printf("**************************存款程序**************************\n");
	printf("请输入存款金额：");
	scanf("%lf",&count);  
	balance+=count;
	printf("您的余额为:%.2lf\n",balance);
	system("pause");
	system("cls");
}
/******************************取钱处理函数*******************/
void draw()
{
	printf("**************************取款程序**************************\n"); 
	printf("请输入取款金额：");
	scanf("%lf",&count);
	balance-=count;
	printf("您的余额为：%.2lf\n",balance);
	system("pause");
	system("cls");
}

