#include "T112_Lab06_2.h"

int main()
{

    int x, y, z;

    while (3 == scanf("%d %d %d", &x, &y, &z)) {
        printf("BEFORE: x, y, z = %d, %d, %d\n", x, y, z);
        max_mid_min(&x, &y, &z);
        printf("AFTER: x, y, z = %d, %d, %d\n", x, y, z);
    }

    return 0;
}






