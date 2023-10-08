#include <iostream>

using namespace std;
int b = 0, c = 0;
int solution = 0;
int a;
int multiplier;
int addendum;
int boolean;
int add_b;

int main()
{
    a = rand() % 1000; // NOLINT(*-msc50-cpp)
	const int checker = a;
    cout << "Test program by VLADos-it" << endl;
    cout << "Press ENTER for start program...";
	cin.get();
    system("cls");
    cout << "Please, input value b: ";
    cin >> b;
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
	while (true)
	{
        cout << "User check value a, please repeat value a equal value on a console! Input a: ";
        cin >> a;
		if (a == checker) break;
        cout << "Answer wrong. Retry please!" << endl;
	}
    cout << "Thank you! Please enter multiplier for value a: ";
    cin >> multiplier;
    cout << "Before multiply program want add any value with value a" << endl;
    cout << "Please enter number for addendum with value a: ";
    cin >> addendum;
	a = (a * multiplier) + addendum;
    system("cls");
    cout << "Your answer on value a (after multiply and addition): " << a << "\n";
    cout << "b = " << b << "\n";
	while (true)
	{
        cout << "Do you want to add a value to value b?" << endl;
        cout << "Yes = 1" << endl;
        cout << "No = 0" << endl;
        cin >> boolean;
		if (boolean == 0) break;
		if (boolean == 1)
		{
            cout << "Enter the number for addendum: ";
            cin >> add_b;
			break;
		}
        cout << "Incorrect operation!" << endl;
	}
	b = b + add_b;
    cout << "Your answer on b: " << b << "\n";

    cout << "Program addition a + b" << endl;
    solution = a + b;
    system("cls");
    cout << "Final answer = " << solution << "\n";
    cout << "Thanks for a test my program. I very happy, thanks you watch:)" << endl;
	while (true)
	{
        cout << "If you want exit this program, write number = final answer" << endl;
        cin >> c;
        if (c == solution) break;
        cout << "Number incorrect!" << endl;
	}
    system("cls");
    cout << "Goodbye! Have a nice day!" << endl;
	return 0;
}