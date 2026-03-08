///***  Q3. Design a template class Comparator<T> in C++ that can compare two values of any data type.
//Your class should:
//•	Store two values of generic type T passed through the constructor.
//•	Provide the following member functions:
//o	isGreater() → Returns true if the first value is greater than the second.
//o	isLess() → Returns true if the first value is less than the second.
//o	isEqual() → Returns true if both values are equal.
//In your main() function, demonstrate the class by:
//•	Creating a Comparator<int> object with two integer values and displaying the comparison results.
//•	Creating a Comparator<double> object with two decimal values and displaying the comparison results.
//•	Creating a Comparator<char> object with two characters and displaying the comparison results.
//**/
//
//#include<iostream>
//using namespace std;
//
//template <typename T>
//class Comparator {
//
//	T v1;
//	T v2;
//public:
//
//	Comparator(T v1, T v2);
//	bool isGreater();
//	bool isLess();
//	bool isEqual();
//	T get(int index);
//
//};
//
////write function definitions of the class here
//template<typename T>
//Comparator<T>::Comparator(T v1, T v2)
//{
//	this->v1 = v1;
//	this->v2 = v2;
//}
//template<typename T>
//bool Comparator<T>::isGreater()
//{
//	return v1 > v2;
//}
//template<typename T>
//bool Comparator<T>::isLess()
//{
//	return v1 < v2;
//}
//template<typename T>
//bool Comparator<T>::isEqual()
//{
//	return v1 == v2;
//}
//template<typename T>
//T Comparator<T>::get(int index)
//{
//	if (index == 0)
//	{
//		return v1;
//	}
//	else
//	{
//		return v2;
//	}
//}
//
////Complete the main function code
//int main()
//{
//	Comparator<int> c1(5, 8);
//	//............. complete it
//	 cout << "Integer Comparison." << endl;
//	 cout << "Greater:" << (c1.isGreater() ? "Yes" : "No") << endl;
//	 cout << "Less:" << (c1.isLess() ? "Yes" : "No") <<endl;
//	 cout << "Equal:" << (c1.isEqual() ? "Yes" : "No") <<endl;
//
//	Comparator<double> c2(5.5, -1.3);
//	//......................complete it
//	cout << "Double Comparison." << endl;
//	cout << "Greater:" <<(c2.isGreater() ? "Yes" : "No") <<endl;
//	cout << "Less:" << (c2.isLess() ? "Yes" : "No") <<endl;
//	cout << "Equal:" << (c2.isEqual() ? "Yes" : "No") <<endl;
//
//	Comparator<char> c3('d', 'D');
//	//......................complete it
//	cout << "Character Comparison." << endl;
//	cout << "Greater:" << (c3.isGreater() ? "Yes" : "No") <<endl;
//	cout << "Less:" << (c3.isLess() ? "Yes" : "No") <<endl;
//	cout << "Equal:" << (c3.isEqual() ? "Yes" : "No") <<endl;
//
//	return 0;
//}