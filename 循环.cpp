#include<stdio.h>
int main()
{
	int num1=0,num2=0,num3=0;
	char c;
	printf("������c��ֵ��");
	scanf("%c",&c);
	while(c!='#')
	{ 
	    scanf("%c",&c);
	    if('a'<=c&&c<='z')
	     num1++;
	    else
	        if('A'<=c&&c<='Z')
	         num2++;
	        else
	            if(0<=c&&c<=9)
	             num3++; 
	            else;
    }
    printf("num1��num2��num3��ֵ�ֱ�Ϊ%d %d %d",num1,num2,num3);
    return 0;
}

