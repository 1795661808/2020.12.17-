#include <stdio.h>
#include<string.h>
#include<malloc.h>
void f(int** q) 
{
	*q = (int *)malloc(sizeof(int));//sizeof(���ݽṹ)����ֵ�Ǹ�����������ռ���ֽ�
	 //�ȼ��� p = (int *)malloc(sizeof(int));
	**q = 5;

}

int main(void)
{
	int* p; //14��

	f(&p);
	printf("%d\n", *p); //17�� 


	return 0;
}