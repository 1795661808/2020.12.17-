#include<stdio.h>
int main()
{
    int a[] = { 1,2,3 };
    int b[] = { 1,2,3,4,5 };
    int c[] = { 8,9 };
    int d[3];
    int* s[3] = { a,b,c };
    int** ps = s;
    int i, j;
    d[0] = sizeof(a) / sizeof(int);  //����aԪ�صĸ���
    d[1] = sizeof(b) / sizeof(int);  //����bԪ�صĸ���
    d[2] = sizeof(c) / sizeof(int);  //����cԪ�صĸ���
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < d[i]; j++)
            printf("%3d", *((*ps + i) + j));  //*(ps+i)�ֱ�ָ��a,b,c
        printf("\n");
    }

    return 0;
}