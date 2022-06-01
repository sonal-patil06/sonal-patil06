#include <stdio.h>
#include "arith.h"

int main(int argc, char const *argv[])
{
    int result = 0;
    printf("arith demo\n");

    result = add(10,20);
    printf("addition result:%d",result);

    result = sub(10,20);
    printf("substraction result:%d",result);
    return 0;
}
