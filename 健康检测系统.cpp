#include<stdio.h>
int main() {
	int weight;
	int hight;
	int flag;
	printf("������������ߣ���cm�������أ���kg��\n");
	scanf("%d %d",&hight,&weight);
	flag=hight/(weight*weight);
	if(flag>=11) {
		printf("���Ľ����ϸ�\n");
	} else if(flag<11) {
		printf("���Ľ������ϸ�\n");
	} else {
		printf("������������\n");
	};
	return 0;
}

