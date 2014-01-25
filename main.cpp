#include <iostream>
#include "generator.h"

using namespace std;

int main()
{
	int *tab;
    cout << "Start Exercise number 1 in group" << endl;
    tab=generate();
    for(int i=0; i<10; i++)
    {
                cout<<"Element: ["<<i+1<<"]: "<<tab[i]<<endl;
    }
    cout<<"\nEnd of Program";
	system("pause");
    return 0;
}
