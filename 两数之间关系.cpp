#include <stdio.h>
int main(){ 
    int x,y;
    printf("������x��ֵ��");
    scanf("%d",&x); 
    if("x<0"){
    	y=x-1;
    	printf("y��ֵΪ��%d\n",y);
	}else if("x=0"){
		y=x;
		printf("y��ֵΪ��%d",y);
	}else if("x>0"){
		y=x+1;
		printf("y��ֵΪ��%d",y);
	}
	return 0;
 }
