#include<stdio.h>
int main()
{
	int a,b,i,c=0;
	printf("�����뷶Χ��");
	scanf("%d %d",&a,&b);
	printf("%d �� %d ֮�������Ϊ:",a, b);
	while(a<b)
	{
		c=0;
		for(i=2;i<=a/2;i++)
		if(a%i==0)
		{
			break;
		}
	    if(c==0) 
	     printf(" %d ", a);
	     a++;
    }return 0;
} 
