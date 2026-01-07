#include <stdio.h>
#include <string.h>

int main() {
    char a[50], b[50];
    scanf("%s", a);
    scanf("%s", b);
    printf("%lu\n", strlen(a));
    strcpy(a, b);
    printf("%s\n", a);
    strcat(a, b);
    printf("%s\n", a);
    printf("%d\n", strcmp(a, b));
    return 0;
}