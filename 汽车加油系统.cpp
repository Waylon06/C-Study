#include<stdio.h>
int main()
{
	float x,y,z,sum;
	printf("请输入加油量："); 
	scanf("%f",&x);
	printf("请在89号，92号，95号中选择汽油品种：");
	scanf("%f",&y);
	if(y=89)y=5.88;
	else if(y=92)y=6.28;
	else if(y=95)y=6.68;
	printf("请选择服务类型\n1：加油员加油\n2：自助加油：");
	scanf("%f",&z);
	if(z==1){
	    sum=y*x*0.98;
		printf("应支付金额为：%f",sum);
	    }
	else if(z==2){
	    sum=y*x*0.95;
	    printf("应支付金额为：%f",sum);
		}
	return 0;
}
