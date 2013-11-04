/*
 * Programm zur Auswertung von Kartenwerten.
 * Unterliegt der Vegas Public License.
 * (c)2014 Das Uni-Blackjack_Team.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char kartenname[3];
	int zahl = 0;
	int x = 4;
	printf("x lebt bei %p\n", &x);
	while (kartenname[0] != 'X')
	{
		puts("Kartenname eingeben: ");
		scanf("%2s", kartenname);
		int wert = 0;
		switch (kartenname[0])
		{
			case 'K':
			case 'D':
			case 'B':
				wert = 10;
				break;
			case 'A':
				wert = 11;
				break;
			case 'X':
				continue;
			default:
				wert = atoi(kartenname);
				if ((wert < 1) || (wert > 10))
				{
					puts("Diesen Wert verstehe ich nicht!");
					continue;
				}
		}
		printf("Der Wert der Karte ist: %i\n", wert);
	/* Prüfen, ob der Kartenwert 3 bis 6 ist. */
		if (wert <= 6 && wert >= 3)
			zahl++;
	/* Andernfalls war die Karte 10, B, D oder K. */
        	if (wert == 10)
                	zahl--;
		printf("Aktuelle Zahl: %i\n", zahl);
	}
	return 0;
}
