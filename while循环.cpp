#include<stdio.h>
int main()
{
	int a,i=1;
	printf("������a��ֵ��");
	scanf("%d",&a);
	while(i<=a)
	{
		if(a>0&&a<0)
            if(a%i==0)
		     i++;
		    else{
		     printf("i��ֵΪ��%d",i);
		     i++;}	 		
		else
		 break;
	 } 
	printf("i��ֵΪ%d",i);
	return 0;
}
