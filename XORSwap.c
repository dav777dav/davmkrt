#include <stdio.h>

int main() {

    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("%d %d", a, b);
    return 0;

}
