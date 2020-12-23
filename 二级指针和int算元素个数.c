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
    d[0] = sizeof(a) / sizeof(int);  //数组a元素的个数  //通法是: sizeof(a)/sizeof(a[0]);
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

/*
    //from https://stackoverflow.com/questions/35020540/how-and-why-sizeofa-sizeofa0-in-c-is-used-to-calculate-the-number-of-eleme
    
    According to the C Standard (6.5.3.4 The sizeof and alignof operators)
    
    The sizeof operator yields the size (in bytes) of its operand, which may be an expression or the parenthesized name of a type. The size is determined from the type of the operand. The result is an integer. If the type of the operand is a variable length array type, the operand is evaluated; otherwise, the operand is not evaluated and the result is an integer constant.
    
    So if you have an array as for example

    int a[N];
    where N is some integer value then expression

    sizeof( a )
    yields the number of bytes occupied by the array. As the array has N elements and each element in turn occupies sizeof( int ) bytes then

    sizeof( a ) == N * sizeof( int )
    or what is the same

    sizeof( a ) == N * sizeof( a[0] )
    As result you can calculate N the following way

    N = sizeof( a ) / sizeof( a[0] )
*/
