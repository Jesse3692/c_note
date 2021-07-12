#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int iNum = 0x64;
    int ptr = &iNum;
    int **pPtr = &iNum;

    printf("%x, %x\n", **pPtr, iNum);
    return 0;
}
