#include <stdio.h>
 
int main(void) {
    char c;
    int db = 0;
    int sikeresen = scanf("%c", &c);
    while (sikeresen == 1) {    /* amíg !vége */
        if (c == 'e' || c == 'E')
            db += 1;                  /* ha megfelel, növeli */
        sikeresen = scanf("%c", &c);
    }
    printf("%d darab e betű volt.\n", db);
 
    return 0;
}

