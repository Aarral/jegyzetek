
#include <stdio.h>

int main(int argc, char **argv)
{
	char betu;
 
	betu = 'A';             /* betu = 65 */
	 
	betu += 1;              /* következő: A→B */
	 
	x = 'c'-'a';            /* távolság: 2, mert a→b→c */
	 
	if (betu >= 'a' && betu <= 'z') {
		printf("Ez egy kisbetű!\n");
		betu = betu-'a'+'A';    /* nagybetű lesz belőle */
	}
	 
	printf("%c betű kódja %d", 81, 81); /* „Q betű kódja 81” */
	printf("%c betű kódja %d", 'Q', 'Q');
	scanf("%c", &betu);
	return 0;
}

