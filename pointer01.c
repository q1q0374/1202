#include<stdio.h>
int main()
{
	int a=3,b=5;
	int *pi;
	
	pi=&a;
	
	printf("a=%d,b=%d",a,b);
	
	printf("a의주소=%u",&a);
	printf("pi값=%u",pi); 
	printf("pi주소=%u",&pi);	
	
	*pi=6;
	printf("a=%d,b=%d,*pi=%d\n",a,b,*pi);
	a=7;
	printf("a=%d,b=%d,*pi=%d\n",a,b,*pi);
	 
}
