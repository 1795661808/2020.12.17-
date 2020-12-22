#include <stdio.h>
#include<string.h>
#include<malloc.h>
void f(int** q) //q是个指针变量,无论q是什么类型的指针变量,都只占4个字节
{
	int i = 5;
	//*q等价于p q和**q都不等价于p
	//*q = i; //p = &i;
}

int main(void)
{
	int* p; //13行

	f(&p);
	printf("%d\n", *p); //16行 本语句没有语法问题,但是逻辑上有问题 

	return 0;
}