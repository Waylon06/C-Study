#include<stdio.h>
int main()
{
	int a,x,y,z;
	printf("����������a��ֵ��");
	scanf("%d",&a);
	x=a%3;
	y=a%5;
	z=a%7;
	if(x==0&&y==0&&z==0)
	printf("a�ܱ�3,5,7����");
	else if(x==0&&y==0)
	printf("a�ܱ�3,5����");
	else if(x==0&&z==0)
	printf("a�ܱ�3,7����");
	else if(y==0&&z==0)
	printf("a�ܱ�5,7����");
	else if(x==0)
	printf("a�ܱ�3����");
	else if(y==0)
	printf("a�ܱ�5����");
	else if(z==0)
	printf("a�ܱ�7����");
	return 0; 
}
