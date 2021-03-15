#include<stdio.h>
int main()
{
	int num1=0,num2=0,num3=0;
	char c;
	printf("请输入c的值：");
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
    printf("num1、num2、num3的值分别为%d %d %d",num1,num2,num3);
    return 0;
}

