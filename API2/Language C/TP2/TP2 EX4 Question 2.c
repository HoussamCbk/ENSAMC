#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Entrez un entier n : ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Un carre parfait ne peut pas �tre n�gatif.\n");
    }
    int racine = sqrt(n);
    if (racine * racine == n) {
        printf("%d est un carr� parfait.\n", n);
    } else {
        printf("%d n'est pas un carr� parfait.\n", n);
    }
    return 0;
}
