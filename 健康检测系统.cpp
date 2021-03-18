#include<stdio.h>
int main() {
	int weight;
	int hight;
	int flag;
	printf("请输入您的身高：（cm）和体重：（kg）\n");
	scanf("%d %d",&hight,&weight);
	flag=hight/(weight*weight);
	if(flag>=11) {
		printf("您的健康合格\n");
	} else if(flag<11) {
		printf("您的健康不合格\n");
	} else {
		printf("您的输入有误\n");
	};
	return 0;
}

