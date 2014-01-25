#include <random>

int* generate() {
	int* tablica = new int[10];
	for (int i = 0; i < 10; i++){
		tablica[i] = rand() % 100;
	}
	return tablica;
}