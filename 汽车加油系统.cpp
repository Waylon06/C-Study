#include<stdio.h>
int main()
{
	float x,y,z,sum;
	printf("�������������"); 
	scanf("%f",&x);
	printf("����89�ţ�92�ţ�95����ѡ������Ʒ�֣�");
	scanf("%f",&y);
	if(y=89)y=5.88;
	else if(y=92)y=6.28;
	else if(y=95)y=6.68;
	printf("��ѡ���������\n1������Ա����\n2���������ͣ�");
	scanf("%f",&z);
	if(z==1){
	    sum=y*x*0.98;
		printf("Ӧ֧�����Ϊ��%f",sum);
	    }
	else if(z==2){
	    sum=y*x*0.95;
	    printf("Ӧ֧�����Ϊ��%f",sum);
		}
	return 0;
}
