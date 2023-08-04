#include<cstdlib>
#include <iostream>
int b = 0 + 1, c = 0;
int answ = 0;
int a;

int main()
{
	using namespace std;
	srand(static_cast<unsigned>(time(nullptr))); // NOLINT(cert-msc51-cpp)

	a = rand() % 1000; // NOLINT(concurrency-mt-unsafe)
	const int tester = a;
	std::cout << "b = " << b << "\n";
	std::cout << "CAUTION! value b previous = 1" << std::endl;
	std::cout << "Please, input value b: ";
	std::cin >> b;
	std::cout << "Program add 1 to value b!" << std::endl;
	b = b + 1;
	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
	while (true)
	{
		std::cout << "User check value a, please repeat value a equal value on a console! Input a: " << std::endl;
		std::cin >> a;
		if (a == tester) break;
		std::cout << "Answer wrong. Retry please!" << std::endl;
	}
	std::cout << "Thank you! Program add 1 and multiply 15!" << std::endl;
	a = (a + 1) * 15;
	std::cout << "Your answer on a: " << a << "\n";
	std::cout << "Program addition a + b" << std::endl;
	answ = a + b;
	std::cout << "Final answer = " << answ << "\n";
	std::cout << "Thanks for a test my program. I very happy, thanks you watch:)" << std::endl;
	while (true)
	{
		std::cout << "If you want exit this program, write number > 13" << std::endl;
		std::cin >> c;
		if (c > 13) break;
		std::cout << "Number incorrect!" << std::endl;
	}
	std::cout << "Goodbye!" << std::endl;
	return 0;
}
