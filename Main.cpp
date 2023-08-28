#include<cstdlib>
#include <iostream>
int b = 0, c = 0;
int answ = 0;
int a;
int multiplier;
int addendum;
int boolean;
int add_b;

int main()
{
	using namespace std;
	srand(static_cast<unsigned>(time(nullptr))); // NOLINT(cert-msc51-cpp)

	a = rand() % 1000; // NOLINT(concurrency-mt-unsafe)
	const int checker = a;
	std::cout << "Test program by VLADos-it" << std::endl;
	std::cout << "Press ENTER for start program...";
	cin.get();
	system("cls"); // NOLINT(concurrency-mt-unsafe)
	std::cout << "Please, input value b: ";
	std::cin >> b;
	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
	while (true)
	{
		std::cout << "User check value a, please repeat value a equal value on a console! Input a: ";
		std::cin >> a;
		if (a == checker) break;
		std::cout << "Answer wrong. Retry please!" << std::endl;
	}
	std::cout << "Thank you! Please enter multiplier for value a: ";
	std::cin >> multiplier;
	std::cout << "Before multiply program want add any value with value a" << std::endl;
	std::cout << "Please enter number for addendum with value a: ";
	std::cin >> addendum;
	a = (a * multiplier) + addendum;
	system("cls"); // NOLINT(concurrency-mt-unsafe)
	std::cout << "Your answer on value a (after multiply and addition): " << a << "\n";
	std::cout << "b = " << b << "\n";
	while (true)
	{
		std::cout << "Do you want to add a value to value b?" << std::endl;
		std::cout << "Yes = 1" << std::endl;
		std::cout << "No = 0" << std::endl;
		std::cin >> boolean;
		if (boolean == 0) break;
		if (boolean == 1)
		{
			std::cout << "Enter the number for addendum: ";
			std::cin >> add_b; // NOLINT(clang-diagnostic-misleading-indentation)
			break;
		}
		std::cout << "Incorrect operation!" << std::endl;
	}
	b = b + add_b;
	std::cout << "Your answer on b: " << b << "\n";

	std::cout << "Program addition a + b" << std::endl;
	answ = a + b;
	system("cls"); // NOLINT(concurrency-mt-unsafe)
	std::cout << "Final answer = " << answ << "\n";
	std::cout << "Thanks for a test my program. I very happy, thanks you watch:)" << std::endl;
	while (true)
	{
		std::cout << "If you want exit this program, write number = final answer" << std::endl;
		std::cin >> c;
		if (c == answ) break;
		std::cout << "Number incorrect!" << std::endl;
	}
	system("cls"); // NOLINT(concurrency-mt-unsafe)
	std::cout << "Goodbye! Have a nice day!" << std::endl;
	return 0;
}
