#include<stdio.h>
int main()
{
	int a,b,i,c=0;
	printf("请输入范围：");
	scanf("%d %d",&a,&b);
	printf("%d 和 %d 之间的素数为:",a, b);
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
