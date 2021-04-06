#include<stdio.h>
int main()
{
	int a[10],i,average,sum;
	for(i=0;i<=9;i++)
	{
		printf("请输入第%d个数的值",i+1);
		scanf("%d",&a[i]);
	} 
	for(i=0;i<=9;i++)
	{
		sum+=a[i];
	}
	average=sum/10;
	printf("平均值为：%d",average);
	return 0;
}
