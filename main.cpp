#include <iostream>
#include "generator.h"
#include "utils.h"

using namespace std;

int main()
{
	int *tab;
    cout << "Start Exercise number 1 in group" << endl;
    tab=generate();
	show(tab);
    cout<<"\nEnd of Program";
	system("pause");
    return 0;
}
