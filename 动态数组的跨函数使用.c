#include <stdio.h>
#include<string.h>
#include<malloc.h>
void f(int** q) 
{
	*q = (int *)malloc(sizeof(int));//sizeof(数据类型)返回值是该数据类型所占的字节
	 //等价于 p = (int *)malloc(sizeof(int));
	**q = 5;

}

int main(void)
{
	int* p; //14行

	f(&p);
	printf("%d\n", *p); //17行 


	return 0;
}
