#include<stdio.h>
#define YEAR 3
#define PRODUCTS 5
int sum(int grade[][PRODUCTS]);
int main()
{
	int sales[YEAR][PRODUCTS]={{1,2,3},{4,5,6},{7,8,9}};
	int total_sale;
	
	total_sale=sum(sales);
	printf("�Ѹ����� %d�Դϴ�.\n",total_sale);
}
int sum(int grade[][PRODUCTS])
{
	int y,p;
	int total=0;
	for(y=0;y<YEAR;y++)
	{
		for(p=0;p<PRODUCTS;p++)
		{
			total+=grade[y][p];
		}
	}
	return total;
}
