#include<stdio.h>
int main()
{
	char ch,*pc;  //포인터 변수는 주소를 담는 변수입니다. 포인터변수에 +혹은 -연산은 
	short sh,*ps;  //포인터변수의 데이터 타입의 크기 만큼 증감된다. sizeof(data type)만큼 증감. 
	int i,*pi;
	long l,*pl;
	float f,*pf;
	double d,*pd;
	
	pc=&ch;
	ps=&sh;
	pi=&i;
	pl=&l;
	pf=&f;
	pd=&d;
	
	printf("%u %u\n",pc,pc+1);
	printf("%u %u\n",ps,ps+1);
	printf("%u %u\n",pi,pi+1);
	printf("%u %u\n",pl,pl+1);
	printf("%u %u\n",pf,pf+1);
	printf("%u %u\n",pd,pd+1);
}
