#include<stdio.h>
int main()
{
	int a[10],i,average,sum;
	for(i=0;i<=9;i++)
	{
		printf("�������%d������ֵ",i+1);
		scanf("%d",&a[i]);
	} 
	for(i=0;i<=9;i++)
	{
		sum+=a[i];
	}
	average=sum/10;
	printf("ƽ��ֵΪ��%d",average);
	return 0;
}
