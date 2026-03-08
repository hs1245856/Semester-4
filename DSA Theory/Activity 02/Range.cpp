//#include<iostream>
//using namespace std;
//
//template<typename T>
//class Range
//{
//private:
//	T a;
//	T b;
//public:
//	Range(T a,T b);
//	bool contains(T value);
//};
//
//template<typename T>
//Range<T>::Range(T a,T b)
//{
//	this->a = a;
//	this->b = b;
//}
//template<typename T>
//bool Range<T>::contains(T value)
//{
//	if (value >= a && value <= b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{
//	Range<int> r1(1, 100);
//	cout << "--- Integer Range:1 to 100 ---" << endl;
//	cout << "Is 50 in range?" << (r1.contains(50)? "Yes":"No") << endl;
//	cout << "Is 150 in range?" << (r1.contains(150)?"Yes":"No") << endl;
//
//	cout << "--- Double Range:0.5 to 9.5 ---" << endl;
//	Range<double> r2(0.5, 9.5);
//	cout << "Is 3.7 in range?" << (r2.contains(3.7)?"Yes":"No") << endl;
//	cout << "Is 9.9 in range?" << (r2.contains(9.9) ? "Yes" : "No") <<endl;
//
//	cout << "--- Char Range:'A' to 'Z' ---" << endl;
//	Range<int> r3('A', 'Z');
//	cout << "Is 'M' in range?" << (r3.contains('M') ? "Yes" : "No") <<endl;
//	cout << "Is 'z' in range?" << (r3.contains('z') ? "Yes" : "No") <<endl;
//
//	return 0;
//}