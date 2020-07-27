#include <iostream>
using namespace std;

int main()
{
	char buchstabe;
	int position;
	cout << "Bitte geben Sie den Buchstaben ein: ? ";
	cin >> buchstabe;
	position = int(buchstabe) - int('a') + 1;
	cout << "Der Buchstabe " << buchstabe << " hat die Position " << position << " im Alphabet" << endl;
	system("PAUSE");
	return 0;
}