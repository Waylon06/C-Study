#include<stdio.h>
int main(){
	int a=0,b=0;
	for(a=1;a<=9;++a)
	{
		for(b=1;b<=a;++b)
		printf("%d*%d=%d \t",a,b,a*b); 
	printf("\n");
	}return 0;
}
