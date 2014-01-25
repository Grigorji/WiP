#include <iostream>

void show(int *tab){
	for (int i = 0; i < 10; i++){
		std::cout << "Element: [" << i + 1 << "]: " << tab[i] << std::endl;
	}
}