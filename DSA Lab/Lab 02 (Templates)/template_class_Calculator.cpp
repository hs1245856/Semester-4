#include<iostream>
using namespace std;


template <typename T>
class Calculator
{
private:
	T a;
	T b;

public:
	Calculator(T a, T b)
	{
		this->a = a;
		this->b = b;
	}
	T add()
	{
		T s = a + b;
		return s;
	}
	T subtract()
	{
		T sub = a - b;
		return sub;
	}
	T Multiply()
	{
		T mul = a * b;
		return mul;
	}
	T divide()
	{
		if (b != 0)
		{
			T div = a / b;
			return div;
		}
		else
		{
			cout << "Denominator never be zero" << endl;
		}
	}
	void show()
	{
		cout << "Sum:" << add() << endl;
		cout << "Subtraction:" << subtract() << endl;
		cout << "Multiplication:" << Multiply() << endl;
		cout << "Division:" << divide() << endl;
	}
};
int main() {

	Calculator<int> c1(10, 2);
	Calculator<double> c2(2.323, 2.345);

	cout << " ***** Integer Calculator *****" << endl;
	c1.show();
	cout << endl;
	cout << " ***** Double Calculator *****" << endl;
	c2.show();



	return 0;
}