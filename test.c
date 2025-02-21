#include <stdio.h>

int main()
{
    int x, y, s;
    printf("enter value of x\n");
    scanf("%d", &x);
    printf("enter value of y\n");
    scanf("%d", &y);
    s = x + y;
    printf("✅ La somme de %d et %d est : %d\n", x, y, s);
    return 0;
}
