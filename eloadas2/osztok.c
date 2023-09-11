#include <stdio.h>
 
int main(void) {
    int szam;
    printf("Kérem a számot: ");
    scanf("%d", &szam);
  
    int db = 0;            /* kezdetben 0 */
    for (int oszto = 1; oszto <= szam; oszto += 1)
        if (szam % oszto == 0)
           db += 1;         /* ha ez osztója, +1 */
  
    printf("Összesen %d osztója van.\n", db);
  
    return 0;
}
