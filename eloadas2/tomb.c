#include <stdio.h>
 
int main(void) {
    double szamok[10];
    
    /* beolvasás */        /* 0-tól 9-ig */
    for (int i = 0; i < 10; i += 1) {
        printf("%d. szám: ", i + 1);
        scanf("%lf", &szamok[i]);
    }
    
    /* kiírás */           /* 9-től 0-ig */
    for (int i = 9; i >= 0; i -= 1) {
        printf("%d. szám: %f\n", i + 1, szamok[i]);
    }
    
    return 0;
}
