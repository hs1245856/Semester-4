#include"Array.h"


int main()
{
	Array<int>a1(5);
	int value;
	cout << "Enter the elements of an array:";

	for (int i = 0; i < 5; i++)
	{
		cin >> value;
		a1.insert(value);
	}
	cout << "Array is:" << endl;
	a1.display();


	return 0;
}