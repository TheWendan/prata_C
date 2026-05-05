// glue.c -- использование операции ##
#include <stdio.h>
#define XNAME(n) x##n
#define PRINT_XN(n) printf("x" #n " = %d\n", x ## n);

int main(void)
{
    int XNAME(1) = 14;

    PRINT_XN(1);

    return 0;


}
