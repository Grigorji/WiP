#include <iostream>
#include "utils.h"

using namespace std;

int main()
{
	int *tab,value_min,value_max,value_sum;
    cout << "Start Exercise number 1 2 3 4 in group" << endl;
    tab=generate();
	show(tab);
	value_min= min(tab);
	value_max= max(tab);
	value_sum=sum(tab);
	cout<<"\nMIN= "<<value_min<<endl;
	cout<<"\nMAX= "<<value_max<<endl;
	cout<<"\nSUM= "<<value_sum<<endl;
    cout<<"\nEnd of Program";
	system("pause");
    return 0;
}
