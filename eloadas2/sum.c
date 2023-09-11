#include <stdio.h>
 
int main(void) {
    int szam;
    
    printf("Kérem a számokat, -1: vége\n");
    scanf("%d", &szam);
    
    int osszeg = 0;          /* elején nulla */
    while (szam != -1) {
        osszeg += szam;      /* összeg = összeg+szám */
        scanf("%d", &szam);
    }
    
    printf("Összeg: %d\n", osszeg);
    
    return 0;
}
