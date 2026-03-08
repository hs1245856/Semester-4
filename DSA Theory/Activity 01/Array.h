#include<iostream>
using namespace std;

template <typename T>
class Array
{
private:
	int size;
	int n;
	T* arr;
public:
	Array(int s);
	void insert(int value);
	int search(T value);
	void remove(int value);
	void swap(int index);
	void display();
};

template <typename T>
Array <T> :: Array(int s)
{
	size = s;
	n = 0;
	arr = new T(size);
}

template <typename T>
void Array <T> ::insert(int value)
{
	if (n < size)
	{
		arr[n++] = value;
	}
	else
	{
		cout << "Array is full" << endl;
	}
}

template <typename T>
int Array<T> :: search(T value)
{
	if (n == 0)
	{
		return -1;
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == value)
		{
			return i;
		}
	}
	return -1;
}

template<typename T>
void Array<T>::swap(int index)
{
	int e = arr[index];
	arr[index] = arr[n];
	arr[n] = e;
}

template <typename T>
void Array<T>::remove(int value)
{
	if (n == 0)
	{
		cout << "Array is Full" << endl;
	}
	int index = search(value);

	if (index == -1)
	{
		swap(index);
	}
}
template<typename T>
void Array<T> ::display()
{
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
		if (i< n- 1)
		{
			cout << ",";
		}
	}
}

