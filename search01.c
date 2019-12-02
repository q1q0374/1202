#include<stdio.h>
#define SIZE 10
int main()
{
	int key,i,search;
	int list[SIZE]={1,2,3,4,5,6,7,8,9};
	
	printf("탑색할 값 입력:");
	scanf("%d",&key);
	
	for(i=0;i<SIZE;i++)
	{
		if(list[i]==key)
		{
			search=1;
			break;
		}
	 } 
	if(search==1)
	{  
	    printf("탐색 성공 배열에 %d 이있습니다\n",list[i]);
    }
    else
	{  
	    printf("탐색 성공 배열에 %d 이없습니다\n",key);
    }
	
	
	
	return 0;
}
