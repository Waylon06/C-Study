#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	printf("�밴˳������a b c��ֵ��");
    scanf("%f %f %f",&a,&b,&c);
    if(a<0)
     printf("��Ǹ�����εı߲���С��0\n");
    else if(b<0)
	 printf("��Ǹ�����εı߲���С��0\n");
	else if(c<0)
	 printf("��Ǹ�����εı߲���С��0\n");
	if(a+b<c)
	 printf("��Ǹ��������������֮�ͱ�����ڵ�����\n");
	else if(a+c<b)
	 printf("��Ǹ��������������֮�ͱ�����ڵ�����\n");
	else if(b+c<a)
	 printf("��Ǹ��������������֮�ͱ�����ڵ�����\n");
	s=1.0/2*(a+b+c);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area=%f",area);
	return 0;
}
