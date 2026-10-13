#include <stdio.h>

int main() {
    int a, b, c, t, x, y, z;
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        printf("Os valores nao formam um triangulo\n");
        return 0;
    }

    if (a == b && b == c)
        printf("Equilatero\n");
    else if (a == b || a == c || b == c)
        printf("Isosceles\n");
    else
        printf("Escaleno\n");

    x = a; y = b; z = c;
    if (x > z) { t = x; x = z; z = t; }
    if (y > z) { t = y; y = z; z = t; }

    if (x * x + y * y == z * z)
        printf("Retangulo\n");
    else if (x * x + y * y > z * z)
        printf("Acutangulo\n");
    else
        printf("Obtusangulo\n");

    return 0;
}