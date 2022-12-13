#include <iostream>
using namespace std;
int main()
{
	int first, second;

	//Ввод данных 
	cout << "Enter the divisible: ";
	cin >> first;

	cout << "Enter the divider: ";
	cin >> second;

	//Это вычислит частное и остаток
	int third = first / second;
	int four = first % second;
	
	cout << "divisble = " << third << endl;
	cout << "divider = " << four << endl;
	return 0;
}
