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
