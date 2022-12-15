#include <iostream>

using namespace std;

int main()
{
	int a , b;

	cout << "Enter two numbers: " << endl;
	cin >> a >> b;

	cout << "Before replacement:" << endl;
	cout << "a = " << a << ", b = " << b << endl;

	int temp = a;
	a = b;
	b = temp;
	
	cout << "After replacement:" << endl;
	cout << "a = " << a << ", b = " << b << endl;

	return 0;

}


5 12
17 12 
17 5
12 5 