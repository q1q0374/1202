#include<stdio.h>
int main()
{
	char ch,*pc;  //������ ������ �ּҸ� ��� �����Դϴ�. �����ͺ����� +Ȥ�� -������ 
	short sh,*ps;  //�����ͺ����� ������ Ÿ���� ũ�� ��ŭ �����ȴ�. sizeof(data type)��ŭ ����. 
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
