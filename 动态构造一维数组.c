#include <stdio.h>
#include<string.h>
#include<malloc.h>

int main(void)
{
	int a[5];
	int len;
	int* pArr;
	int i;

	printf("��������Ҫ��ŵ�Ԫ�صĸ���:");
	scanf_s("%d", &len);
	pArr = (int*)malloc(4 * len);//��̬����һά����

	for (i = 0; i < len; i++)
	{
		scanf_s("%d", &pArr[i]);
	}

	printf("һά�����������:\n");

	for (i = 0; i < len; ++i)
		printf("%d\n", pArr[i]);



	return 0;
}