#include <stdio.h>
#define SQUARE(X) X*X 
#define PR(X) printf("Результат: %d.\n", X)

int main()
{
    int x = 5;
    int z;

    printf("Вычисление SQUARE(x+2): ");
    PR(SQUARE(x+2));
    printf("Вычисление 100/SQUARE(2): ");
    PR(100/SQUARE(2));

    return 0;
}
