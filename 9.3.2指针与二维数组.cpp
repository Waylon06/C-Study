#include<stdio.h>
int main()
{
	int a[4][3],i;
	printf("数组a的首地址：%d\n",a); 
	for(i=0;i<4;i++)
	{
		printf("数组a[%d]的首地址：%d\n",i,a[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("数组元素a[0][%d]地址：%d\n",i+1,&a[0][i]);
	}
	printf("数组元素a[0][0]的长度：%d\n",sizeof(a[0][0]));
	return 0;
}
