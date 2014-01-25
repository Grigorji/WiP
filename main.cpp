#include <iostream>
#include "generator.h"

using namespace std;

int main()
{
    int tab = new int(10);
    cout << "Start Exercise number 1 in group" << endl;
    tab=generate();
    for(int i=0; i<10; i++)
    {
                cout<<"Element: ["<<i<<"]: "<<tab[i];
    }
    cout<<"\nEnd of Program";
    return 0;
}
