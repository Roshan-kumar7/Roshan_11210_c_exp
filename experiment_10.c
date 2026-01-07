#include <stdio.h>

int main() {
    int a, b, ch;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("1.Add 2.Subtract 3.Multiply 4.Divide\n");
    scanf("%d", &ch);
    switch (ch) {
        case 1: printf("%d\n", a + b); break;
        case 2: printf("%d\n", a - b); break;
        case 3: printf("%d\n", a * b); break;
        case 4: printf("%d\n", a / b); break;
        default: printf("Invalid\n");
    }
    return 0;
}