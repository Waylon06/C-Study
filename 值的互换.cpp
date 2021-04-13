#include<stdio.h>
int main()
{
	float a,b,box;
	printf("给a赋值为：");
	scanf("%f",&a);
	printf("给b赋值为：");
	scanf("%f",&b);
	box=a;
	a=b;
	b=box;
	printf("将a与b的值交换");
	printf("a的值为：%.2f\nb的值为：%.2f\n",a,b);
	printf("中间变量box为：%f",box);
	return 0; 
} 
