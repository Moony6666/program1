#include <iostream>
using namespace std;
int main()
{
	int first, second,third,four sum;

	//Ввод данных 
	cout << "Enter the divisible: ";
	cin >> first;

	cout << "Enter the divider: ";
	cin >> second;

	//Это вычислит частное и остаток
	third = first / second;
	four = first % second;
	//Вывод данных с суммой
	cout << "divisble = " << third << endl;
	cout << "divider = " << four << endl;
	return 0;
}
