#include <stdio.h>//fehlende Laufzeitbibliothek
int main() {
	int y;
	int x = 17;//int X : = 17;
	for (y = 2; y < (x / 2); y++) {//for (y = 2; y < (x / 2), y + ) {
		if (x% y == 0) {//if (x % y = 0) {
			return 0;//return 0
		}
	}
	printf("Gefunden!\n");//printf(Gefunden!\n"
	return 1;//return 1,
}

//2.Das Programm dividiert x durch jede Nummer von 2 bis x/2 und prüfen ob der Rest 0 ist, um Primzahl zu finden.