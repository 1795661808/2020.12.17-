#include<stdio.h>
#include<string.h>
void huhuan_1(int a, int b);

void huhuan_3(int * p, int * q)//��ʾ�� ָ�����ֱ���������ڴ� ���ܺ�����ջ�ṹӰ��
{
    int  t;//p��int *��*p��int

    t = *p;
    *p = *q;
    *q = t;

    return 0;
}

int main(void)
{
    int a = 3;
    int b = 5;

    huhuan_3(&a, &b);//huhuan_2(*p,*q); huhuan_2(a, b)�� �Ǵ����

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
/*
void huhuan_1(int a, int b)//���ܽ���
{
    int t;

    t = a;
    a = b;
    b = t;

    return 0;
}*/

/*
void huhuan_2(int * p, int * q)//��Ȼ����ʵ��
{
    int * t;//���Ҫ����p��q��ֵ��t������int * ,������int

    t = p;
    p = q;
    q = t;

    return 0;
}*/