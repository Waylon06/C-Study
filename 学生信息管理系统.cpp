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
		
		printf("����������:");
		scanf("%s",&STU[n].name);
		printf("������ѧ��:");
		scanf("%d",&STU[n].number);
		printf("��������޳ɼ�:");
		scanf("%f",&STU[n].bixiu);
		printf("������ѡ�޳ɼ�:");
		scanf("%f",&STU[n].xuanxiu);
		printf("������ʵ��ɼ�:");
		scanf("%f",&STU[n].shiyan);
		STU[n].all=STU[n].bixiu+STU[n].xuanxiu+STU[n].shiyan;
		l:
		printf("�Ƿ�ֹͣ¼��ѧ����Ϣ��\n1.��    2.��\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
			system("pause");
	        system("cls");
			return;
			case 2:break;
			default:
		    printf("��Ǹ������������������������\n\n");
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
	printf("����ͨ���������ַ�ʽ������ѧ����Ϣ\n1������\t2��ѧ��\n");
	scanf("%d",&a);
	switch(a)
	{
	    case 1:
		    printf("������Ҫ���ҵ�ѧ��������\n");
	        scanf("%s",&N);
	        break;
	    case 2:
		    printf("������Ҫ���ҵ�ѧ��ѧ�ţ�\n");
	        scanf("%d",&i);
	        break;
	    default:
		    printf("��Ǹ��������������\n");
		    break; 
	}
	for(int t=0;t<=n;t++)
	{
		if(strcmp(N,STU[t].name)==0||i==STU[t].number)
		{
		printf("����\t\tѧ��\t\t���޷���\t\tѡ�޷���\t\tʵ�����\n");
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
	l:printf("����ͨ���������ַ�ʽ��ɾ��ѧ����Ϣ\n1������\t2��ѧ��\n");
	scanf("%d",&a);
	switch(a)
	{
	    case 1:
		    printf("������Ҫɾ����ѧ��������\n");
	        scanf("%s",&N);
	        break;
	    case 2:
		    printf("������Ҫɾ����ѧ��ѧ�ţ�\n");
	        scanf("%d",&i);
	        break; 
	    default:
		    printf("��Ǹ������������������������\n\n");
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
	printf("����ͨ���������ַ�ʽ�����Ҳ��޸�ѧ����Ϣ\n1������\t2��ѧ��\n");
	scanf("%d",&a);
	if(a==1)
	{
		printf("�����������޸ĳɼ���ѧ��������");
		scanf("%s",&N);
		for(t=0;t<=n;t++)
		{
			if(strcmp(N,STU[t].name)==0)
			{
		            printf("�������޸ĺ���޳ɼ�:");
		            scanf("%f",&STU[t].bixiu);
		            printf("�������޸ĺ�ѡ�޳ɼ�:");
		            scanf("%f",&STU[t].xuanxiu);
		            printf("�������޸ĺ��ʵ��ɼ�:");
		            scanf("%f",&STU[t].shiyan);
		            printf("�޸ĳɹ���\n");
			}
		}
		system("pause");
	    system("cls"); 
	}
	else if(a==2)
	{
		printf("�����������޸ĳɼ���ѧ��ѧ�ţ�");
		scanf("%d",&i); 
		for(t=0;t<=n;t++)
		{
			if(i==STU[t].number)
			{
				printf("�������޸ĺ���޳ɼ�:");
		        scanf("%f",&STU[t].bixiu);
		        printf("�������޸ĺ�ѡ�޳ɼ�:");
		        scanf("%f",&STU[t].xuanxiu);
		        printf("�������޸ĺ��ʵ��ɼ�:");
		        scanf("%f",&STU[t].shiyan);
		        printf("�޸ĳɹ���\n");
			}
		}
		system("pause");
	    system("cls");
	} 
}
void intput()
{
	int a,i,t;
	printf("��������������λ�ã�\n");
	scanf("%d",&i);
	n=n+1;
	for(t=i;t<=n;t++)
	{
		STU[t+1]=STU[t];
	}
	printf("����������ѧ������:");
	scanf("%s",&STU[i].name);
	printf("����������ѧ��ѧ��:");
	scanf("%d",&STU[i].number);
	printf("����������ѧ�����޳ɼ�:");
	scanf("%f",&STU[i].bixiu);
	printf("����������ѧ��ѡ�޳ɼ�:");
	scanf("%f",&STU[i].xuanxiu);
	printf("����������ѧ��ʵ��ɼ�:");
	scanf("%f",&STU[i].shiyan);
	printf("����ɹ���\n");
	system("pause");
	system("cls"); 
}
void rank()
{
	int a,t,i; 
	l:printf("��ѡ��������ʽ\n1��ѧ��\t2���ܷ�\n");
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
			printf("����\t\tѧ��\t\t���޷���\t\tѡ�޷���\t\tʵ�����\n");
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
			printf("����\t\tѧ��\t\t���޷���\t\tѡ�޷���\t\tʵ�����\n");
			for(i=0;i<=n;i++)
			{
				printf("%s\t\t%d\t\t%.1f\t\t\t%.1f\t\t\t%.1f\n",STU[i].name,STU[i].number,STU[i].bixiu,STU[i].xuanxiu,STU[i].shiyan);
			}
			break;
		default:
			printf("��Ǹ������������������������\n\n");
		    goto l;
			break; 
			 
	}
	system("pause");
	system("cls"); 
} 
void total()
{
	int i;
	printf("����\t\tѧ��\t\t���޷���\t\tѡ�޷���\t\tʵ�����\n");
	for(i=0;i<=n;i++)
	{
		printf("%s\t\t%d\t\t%.1f\t\t\t%.1f\t\t\t%.1f\n",STU[i].name,STU[i].number,STU[i].bixiu,STU[i].xuanxiu,STU[i].shiyan);
	}
	printf("�ܹ���%dλѧ��\n",i);
	system("pause");
	system("cls");
}
int main() 
{ 
  int keydown; 
	while(1)
	{
	printf("\t\t\t\t---------------------STUDENT------------------\n");
	printf("\t\t\t\t|            1�� ѧ���ɼ���Ϣ¼��            |\n");
	printf("\t\t\t\t|            2�� ѧ���ɼ���Ϣ��ѯ            |\n");
	printf("\t\t\t\t|            3�� ѧ���ɼ���Ϣɾ��            |\n");
	printf("\t\t\t\t|            4�� ѧ���ɼ���Ϣ�޸�            |\n");
	printf("\t\t\t\t|            5�� ѧ���ɼ���Ϣ����            |\n");
	printf("\t\t\t\t|            6�� ѧ���ɼ�����                |\n");
	printf("\t\t\t\t|            7�� ѧ������ͳ��                |\n");
	printf("\t\t\t\t|            0�� �˳�ϵͳ                    |\n");
	printf("\t\t\t\t----------------------------------------------\n\n\n");
	printf("���������Ĳ�����\n");
	scanf("%d",&keydown);
	if(keydown==0) 
	{
		printf("ϵͳ�����ر�");
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
		printf("���������������������룡\n");
	}
	}
	return 0;
}
