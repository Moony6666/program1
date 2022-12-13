
#include <iostream>
using namespace std;

int main()
{
	int a , b , temp;

	cout << "Enter two numbers: " << endl;
	cin >> a >> b;

	cout << "Before replacement:" << endl;
	cout << "a = " << a << ", b = " << b << endl;

	temp = a;
	a = b;
	b = temp;
	
	cout << "After replacement:" << endl;
	cout << "a = " << a << ", b = " << b << endl;

	return 0;

}

