#include <stdio.h>
#include<string.h>
#include<malloc.h>

int main(void)
{
	int a[5];
	int len;
	int* pArr;
	int i;

	printf("请输入你要存放的元素的个数:");
	scanf_s("%d", &len);
	pArr = (int*)malloc(4 * len);//动态构造一维数组

	for (i = 0; i < len; i++)
	{
		scanf_s("%d", &pArr[i]);
	}

	printf("一维数组的内容是:\n");

	for (i = 0; i < len; ++i)
		printf("%d\n", pArr[i]);



	return 0;
}