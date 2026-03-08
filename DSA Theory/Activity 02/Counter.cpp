///***   Q1. Design a template class Counter<T> in C++ that can track and increment a count value of any numeric type.
//Your class should:
//•	Store a single value of generic type T initialized through the constructor.
//•	Provide the following member functions:
//o	increment() → Increases the count value by 1.
//o	getValue() → Returns the current count value.
//In your main() function, demonstrate the class by:
//•	Creating a Counter<int> object with an initial value and calling increment() multiple times, displaying the result after each increment.
//•	Creating a Counter<double> object with a decimal starting value and incrementing it, displaying the result.
//•	Creating a Counter<float> object and demonstrating the same behavior
//***/
//
//
//
//#include<iostream>
//using namespace std;
//
//template <typename T>
//class Counter
//{
//	T value;
//public:
//
//	Counter(T v);
//	void increment();
//	T getValue();
//
//};
//
//template <typename  T>
//Counter<T>::Counter(T v)
//{
//	//complete the missing code
//	cout << "Initial Value:" << v << endl;
//	value = v;
//}
//
//template <typename  T>
//void Counter<T>::increment()
//{
//	//complete the missing code
//	value++;
//}
//
//
//template <typename T>
//T  Counter<T>::getValue()
//{
//	//complete the missing code
//	
//	return value;
//
//}
//
//int main()
//{
//	cout << "*Integer Counter*" << endl;
//	Counter<int> int_counter(4);
//	int_counter.increment() ;
//
//	
//	cout << "After First increment:"<<int_counter.getValue() << endl;
//	int_counter.increment();
//	cout << "After Second Increment:" << int_counter.getValue() << endl;
//	cout << endl;
//	cout << "*Double Counter*" << endl;
//	Counter<double> double_counter(1.5);
//	double_counter.increment();
//	cout<<"After First increment:"<<double_counter.getValue() << endl;
//	double_counter.increment();
//	cout << "After Second Increment:" << double_counter.getValue() << endl;
//	cout << endl;
//	cout << "*Float Counter*" << endl;
//	Counter<float> float_counter(11.5);
//	float_counter.increment();
//	cout <<"After First increment:"<<float_counter.getValue();
//	float_counter.increment();
//	cout << endl;
//	cout << "After Second Increment:" << float_counter.getValue() << endl;
//
//	cout << endl;
//
//	return 0;
//
//}