#include<stdio.h>
int main()
{
	int a,x,y,z;
	printf("请输入整数a的值：");
	scanf("%d",&a);
	x=a%3;
	y=a%5;
	z=a%7;
	if(x==0&&y==0&&z==0)
	printf("a能被3,5,7整除");
	else if(x==0&&y==0)
	printf("a能被3,5整除");
	else if(x==0&&z==0)
	printf("a能被3,7整除");
	else if(y==0&&z==0)
	printf("a能被5,7整除");
	else if(x==0)
	printf("a能被3整除");
	else if(y==0)
	printf("a能被5整除");
	else if(z==0)
	printf("a能被7整除");
	return 0; 
}
