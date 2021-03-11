#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	printf("请按顺序输入a b c的值：");
    scanf("%f %f %f",&a,&b,&c);
    if(a<0)
     printf("抱歉三角形的边不能小于0\n");
    else if(b<0)
	 printf("抱歉三角形的边不能小于0\n");
	else if(c<0)
	 printf("抱歉三角形的边不能小于0\n");
	if(a+b<c)
	 printf("抱歉三角形任意两边之和必须大于第三边\n");
	else if(a+c<b)
	 printf("抱歉三角形任意两边之和必须大于第三边\n");
	else if(b+c<a)
	 printf("抱歉三角形任意两边之和必须大于第三边\n");
	s=1.0/2*(a+b+c);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area=%f",area);
	return 0;
}
