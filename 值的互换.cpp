#include<stdio.h>
int main()
{
	float a,b,box;
	printf("��a��ֵΪ��");
	scanf("%f",&a);
	printf("��b��ֵΪ��");
	scanf("%f",&b);
	box=a;
	a=b;
	b=box;
	printf("��a��b��ֵ����");
	printf("a��ֵΪ��%.2f\nb��ֵΪ��%.2f\n",a,b);
	printf("�м����boxΪ��%f",box);
	return 0; 
} 
