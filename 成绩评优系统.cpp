#include <stdio.h>
int main(){
	int score;
	printf("请输入您的分数");
	scanf("%d",&score) ; 
	if(score>100){
	printf("抱歉您的输入有误\n"); 
	}else if(score>=90&&score<=100){
		printf("您的等级为A");
	}else if(score>=80&&score<90){
		printf("您的等级为B"); 
	}else if(score>=70&&score<80){
		printf("您的等级为C");
	}else if(score>=60&&score<70){
		printf("您的等级为D");
	}else if(score<60){
		printf("您的等级为E"); 
	}
	return 0; 
}
