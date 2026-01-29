#include <stdio.h>
int main () {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c); 
    if (a >= b && a >= c) {
        printf("%d is the largest number.\n", a);
    }
    if (b >=a && b >=c) {
        printf("%d 'B'is the largest number.\n", b);
    }
    else {
        printf("%d is the largest number for C.\n", c);   
    }
    return 0;
}