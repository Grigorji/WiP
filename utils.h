#include <iostream>

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