#include<stdio.h>
int main()
{
	int a[4][3],i;
	printf("����a���׵�ַ��%d\n",a); 
	for(i=0;i<4;i++)
	{
		printf("����a[%d]���׵�ַ��%d\n",i,a[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("����Ԫ��a[0][%d]��ַ��%d\n",i+1,&a[0][i]);
	}
	printf("����Ԫ��a[0][0]�ĳ��ȣ�%d\n",sizeof(a[0][0]));
	return 0;
}
