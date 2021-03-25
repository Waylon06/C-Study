#include <stdio.h>
int main(){ 
    int x,y;
    printf("请输入x的值：");
    scanf("%d",&x); 
    if("x<0"){
    	y=x-1;
    	printf("y的值为：%d\n",y);
	}else if("x=0"){
		y=x;
		printf("y的值为：%d",y);
	}else if("x>0"){
		y=x+1;
		printf("y的值为：%d",y);
	}
	return 0;
 }
