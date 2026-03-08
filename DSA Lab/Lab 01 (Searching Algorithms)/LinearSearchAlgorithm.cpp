#include<iostream>
using namespace std;


int LinearSearchAlgorithm(int arr[], int key, int n)
{
	int i = 0;
	while(i<n)
	{
		if (arr[i] == key)
		{
			cout<<arr[i]<<"Found at index:"<<i;
			break;
		}
		else
		{
			i++;
		}
	}
	return -1;
}
int main()
{
	int key;
	const int size = 10;

	int arr[size];
	cout << "Enter the elements of an array:";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Enter the element you want to search:";
	cin >> key;
	LinearSearchAlgorithm(arr, key, size);

	return 0;
}