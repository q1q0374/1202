#include<stdio.h>
int main()
{
	int a=3,b=5;
	int *pi;
	
	pi=&a;
	
	printf("a=%d,b=%d",a,b);
	
	printf("a���ּ�=%u",&a);
	printf("pi��=%u",pi); 
	printf("pi�ּ�=%u",&pi);	
	
	*pi=6;
	printf("a=%d,b=%d,*pi=%d\n",a,b,*pi);
	a=7;
	printf("a=%d,b=%d,*pi=%d\n",a,b,*pi);
	 
}
