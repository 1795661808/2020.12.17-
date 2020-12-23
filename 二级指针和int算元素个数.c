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
    d[0] = sizeof(a) / sizeof(int);  //数组a元素的个数
    d[1] = sizeof(b) / sizeof(int);  //数组b元素的个数
    d[2] = sizeof(c) / sizeof(int);  //数组c元素的个数
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < d[i]; j++)
            printf("%3d", *((*ps + i) + j));  //*(ps+i)分别指向a,b,c
        printf("\n");
    }

    return 0;
}