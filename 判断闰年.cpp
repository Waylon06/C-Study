<<<<<<< HEAD
#include<stdio.h>
int main()
{
	char year,month,day,sum;
	printf("������year��ֵ��\n");
	scanf("%d",&year);
	if(year%4==0)
	{
	    if(year%100==0){
		    printf("����Ϊ������\n"); 
	        if(year%400==0)
	            printf("����Ϊ����\n");
		    else
		        printf("����Ϊ������\n");
		} 
	    else
	        printf("����Ϊ����\n");}
	else
	    printf("����Ϊ������\n");
	printf("������month��day��ֵ��\n");
	scanf("%d %d",&month,&day);
	sum=30*month+day;
	printf("���Ǹ���ĵ�%d��",sum); 
	return 0; 
}
=======
#include<stdio.h>
int main()
{
	char year,month,day,sum;
	printf("������year��ֵ��\n");
	scanf("%d",&year);
	if(year%4==0)
	{
	    if(year%100==0){
		    printf("����Ϊ������\n"); 
	        if(year%400==0)
	            printf("����Ϊ����\n");
		    else
		        printf("����Ϊ������\n");
		} 
	    else
	        printf("����Ϊ����\n");}
	else
	    printf("����Ϊ������\n");
	printf("������month��day��ֵ��\n");
	scanf("%d %d",&month,&day);
	sum=30*month+day;
	printf("���Ǹ���ĵ�%d��",sum); 
	return 0; 
}
>>>>>>> 485433972e667efb0e32bd7c87a659c41ef424b9
