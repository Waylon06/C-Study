<<<<<<< HEAD
#include<stdio.h>
int main()
{
	char year,month,day,sum;
	printf("请输入year的值：\n");
	scanf("%d",&year);
	if(year%4==0)
	{
	    if(year%100==0){
		    printf("该年为非闰年\n"); 
	        if(year%400==0)
	            printf("该年为闰年\n");
		    else
		        printf("该年为非闰年\n");
		} 
	    else
	        printf("该年为闰年\n");}
	else
	    printf("该年为非闰年\n");
	printf("请输入month与day的值：\n");
	scanf("%d %d",&month,&day);
	sum=30*month+day;
	printf("这是该年的第%d天",sum); 
	return 0; 
}
=======
#include<stdio.h>
int main()
{
	char year,month,day,sum;
	printf("请输入year的值：\n");
	scanf("%d",&year);
	if(year%4==0)
	{
	    if(year%100==0){
		    printf("该年为非闰年\n"); 
	        if(year%400==0)
	            printf("该年为闰年\n");
		    else
		        printf("该年为非闰年\n");
		} 
	    else
	        printf("该年为闰年\n");}
	else
	    printf("该年为非闰年\n");
	printf("请输入month与day的值：\n");
	scanf("%d %d",&month,&day);
	sum=30*month+day;
	printf("这是该年的第%d天",sum); 
	return 0; 
}
>>>>>>> 485433972e667efb0e32bd7c87a659c41ef424b9
