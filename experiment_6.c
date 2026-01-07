#include <stdio.h>

int main() {
    int a, b;
    int *p, *q;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;

    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;

    printf("After swap: %d %d\n", a, b);
    return 0;
}