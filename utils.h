#include <iostream>
#include <random>

void show(int *tab){
	for (int i = 0; i < 10; i++){
		std::cout << "Element: [" << i + 1 << "]: " << tab[i] << std::endl;
	}
}

int sum(int *tab){
	int result;
	for (int i = 0; i < 10; i++){
		result += tab[i];
	}
	return result;
}

int* generate() {
	int* tablica = new int[10];
	for (int i = 0; i < 10; i++){
		tablica[i] = rand() % 100;
	}
	return tablica;
}

int min(int* wsk)
{
	int min;
	std::cout << "Function MIN" << std::endl;
	for (int i = 0; i<sizeof(wsk) / sizeof(*wsk); i++)
	{
		if (i>i + 1){
			min = i + 1;
		}
		else{
			min = i;
		}
	}
	return min;
}

int max(int* wsk)
{
	int max;
	std::cout << "Function MAX" << std::endl;
	for (int i = 0; i<sizeof(wsk) / sizeof(*wsk); i++)
	{
		if (i>i + 1){
			max = i + 1;
		}
		else{
			max = i;
		}
	}
	return max;
}