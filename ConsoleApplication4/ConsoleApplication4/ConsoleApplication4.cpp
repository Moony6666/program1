#include <iostream>
int main() {
	int day, month, year;

	std::cout << "enter day: ";
	std::cin >> day;

	std::cout << "enter month: ";
	std::cin >> month;

	std::cout << "enter year: ";
	std::cin >> year;
	std::cout << "you entered: " << day << "." << month << "." << year << "\n";

	std::cin.get();
}