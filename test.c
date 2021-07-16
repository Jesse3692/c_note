#include <stdio.h>

int main(int argc, char const *argv[])
{
    typedef int INT64;

    INT64 a;
    a = 123;
    printf("%d\n", a);

    float b;
    (INT64) b; //这里的类型转换不管用
    b = 456;
    printf("%d\n", b);
    return 0;
}
