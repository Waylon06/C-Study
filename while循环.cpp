#include<stdio.h>
int main()
{
	int a,i=1;
	printf("请输入a的值：");
	scanf("%d",&a);
	while(i<=a)
	{
		if(a>0&&a<0)
            if(a%i==0)
		     i++;
		    else{
		     printf("i的值为：%d",i);
		     i++;}	 		
		else
		 break;
	 } 
	printf("i的值为%d",i);
	return 0;
}
