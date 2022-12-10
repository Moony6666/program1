#include <iostream>
using namespace std;
int main()
{
	int first, second, sum;

	//Ввод данных 
	cout << "Enter two integers: ";
	cin >> first >> second;

	//Это вычислит сумму 
	sum = first + second;
	//Вывод данных с суммой
	cout << first << "+" << second << "=" << sum << endl;
	return 0;
}
 