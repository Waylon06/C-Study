#include<stdio.h>
#include<windows.h>
void save();							/*��Ǯ����*/
void draw();
void yue();					/*ȡǮ����*/
double count,balance=0;							/*ȫ�ֱ�������ʾ�˻����*/
/******************************������*****************************/
int main()
{
	int a;
	while(1)							/*ʹ��ѭ���ṹ��ɲ˵�ѭ��*/
	{							/*�˵�����ʾ���ع���*/ 
		printf("\t\t\t\t\t|--------��ǮȡǮ����˵�-------|\n");
		printf("\t\t\t\t\t|\t1:��Ǯ\t\t\t|\n");
		printf("\t\t\t\t\t|\t2:ȡǮ\t\t\t|\n");
		printf("\t\t\t\t\t|\t3:����ѯ\t|\n"); 
		printf("\t\t\t\t\t|\t0:�˳�\t\t\t|\n");
		printf("\t\t\t\t\t|-------------------------------|\n");
		printf("��ѡ��������Ҫѡ���ҵ��(0-3)\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:save();break;
			case 2:draw();break;
			case 3:yue();break;
			case 0:printf("����ر�");
			    return 0;
			    break; 
			default:
				printf("��Ǹ����������������������");
				break; 
		}
		//�������


	}
	return 0;
}
/**************************��Ǯ������************************/
void save()
{
	printf("**************************������**************************\n");
	printf("���������");
	scanf("%lf",&count);  
	balance+=count;
	printf("�������Ϊ:%.2lf\n",balance);
	system("pause");
	system("cls");
}
/******************************ȡǮ������*******************/
void draw()
{
	printf("**************************ȡ�����**************************\n"); 
	printf("������ȡ���");
	scanf("%lf",&count);
	balance-=count;
	printf("�������Ϊ��%.2lf\n",balance);
	system("pause");
	system("cls");
}
void yue()
{
	printf("************************����ѯ����************************\n");
	printf("�������Ϊ��%.2lf\n",balance);
	system("pause");
	system("cls");
}

