///*  Q2. Write a template class Array<T> in C++ that can store exactly 5 elements of any data type.
//Your class should provide the following functionality:
//•	set(int index, T value) → Stores a value at the given index. If the index is out of range, display an appropriate message.
//•	get(int index) → Returns the value at the given index. If the index is out of range, display an appropriate message.
//•	print() → Displays all 5 elements in a single line.
//In your main() function, demonstrate the class by:
//•	Creating an Array<int> object, storing 5 integer values and printing them.
//•	Creating an Array<double> object, storing 5 decimal values and printing them.
//*/
//
//#include<iostream>
//using namespace std;
//
//template <typename T>
//class Array {
//
//	T arr[5];
//
//public:
//	void set(int index, T value);
//	T get(int index);
//	void print();
//};
//
////write function definitions of the class here
//template<typename T>
//void Array<T> :: set(int index, T value)
//{
//	if (index >=0&&index<5)
//	{
//		arr[index] = value;
//	}
//	else
//	{
//		cout << "Maximum Range is only 5 element(0-4)" << endl;
//	}
//}
//template<typename T>
//
//T Array<T>:: get(int index)
//{
//	if (index >= 0 && index < 5)
//	{
//		return arr[index];
//	}
//	else
//	{
//		cout << "Index must be in range of 0-4." << endl;
//		return T();
//	}
//}
//template<typename T>
//void Array<T> :: print()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i]<<" ";
//	}
//}
//
//
//
////Complete the main function code
//int main()
//{
//	Array<int>c1;
//
//	c1.set(0,10);
//	c1.set(1, 20);
//	c1.set(2, 30);
//	c1.set(3,40);
//	c1.set(4, 50);
//	c1.get(0);
//	c1.get(1);
//	c1.get(2);
//	c1.get(3);
//	c1.get(4);
//
//
//	cout << "Integer Array:";
//	c1.print();
//	cout << endl;
//
//	Array<double>c2;
//
//	c2.set(0, 13.4);
//	c2.set(1, 34.6);
//	c2.set(2, 87.9);
//	c2.set(3, 12.3);
//	c2.set(4, 56.7);
//	c2.get(0);
//	c2.get(1);
//	c2.get(2);
//	c2.get(3);
//	c2.get(4);
//
//	cout << endl;
//	cout << "Double Array:";
//	c2.print();
//	cout << endl;
//
//
//	return 0;
//}
