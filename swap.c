/*��ָ�뽫��������*/
#include<stdio.h>
void swap(int *a, int *b)
{	
	int t;
	t = *a;
	*a = *b;
	*b = t;
	
	//ʵ�ʣ����ݽ���ָ��ָ��ĵ�ַ��ֵ��ʵ��ֵ����
}

int main()
{
	int a = 10, b = 20;
	swap(&a, &b);
	int d = 11;
	int *c = &d;
	printf("a = %d b = %d \n", a, b);	
	printf("c = %d\n", *c);
} 
