#include<iostream>
using namespace std;

int BinarySearchAlgorithm(int arr[], int n, int key)
{
	int low = 0;
	int high = n - 1;

	int i = 0;

	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (arr[mid] == key)
		{
			return mid;
		}
		else if (key < arr[mid])
		{
			i++;
			high = mid - 1;
		}
		else
		{
			i++;
			low = mid + 1;
			if (low > high)
			{
				return -1;
			}
		}
	}
	return 0;
}


int main()
{
	int size = 10;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key;

	cout << "Enter the element you want to search:";
	cin >> key;
	cout << endl;

	int result=BinarySearchAlgorithm(arr, size, key);
	if (result != 0)
	{
		cout << "Element Found at index" << result << endl;
	}
	else
	{
		cout <<"Element Not Found" << endl;
	}
	return 0;
}

