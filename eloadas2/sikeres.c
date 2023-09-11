#include <stdio.h>
 
int main(void) {
    char c;
    int sikeresen = scanf("%c", &c);
    if (sikeresen == 1) {   /* sikeresen != EOF */
        printf("Beolvasva: %c, karakterkód: %d", c, c);
    } else {
        printf("Fájl vége jel, nincs karakter beolvasva.");
    }
 
    return 0;
}
