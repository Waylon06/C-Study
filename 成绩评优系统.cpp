#include <stdio.h>
int main(){
	int score;
	printf("���������ķ���");
	scanf("%d",&score) ; 
	if(score>100){
	printf("��Ǹ������������\n"); 
	}else if(score>=90&&score<=100){
		printf("���ĵȼ�ΪA");
	}else if(score>=80&&score<90){
		printf("���ĵȼ�ΪB"); 
	}else if(score>=70&&score<80){
		printf("���ĵȼ�ΪC");
	}else if(score>=60&&score<70){
		printf("���ĵȼ�ΪD");
	}else if(score<60){
		printf("���ĵȼ�ΪE"); 
	}
	return 0; 
}
