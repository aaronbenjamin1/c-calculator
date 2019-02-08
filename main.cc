#include <iostream>
using namespace std;

int main() {

	int choice = 0;
	int numberOne = 0;
	int numberTwo = 0;
	cout << "1) addition 2) subtraction 3) multiplication 4) division:  " << endl;
	cin >> choice;

	if (choice == 1) {
		cout << "Please enter two numbers: " << endl;
		cin >> numberOne >>  numberTwo;
		if (!cin) {
			cout << "BAD INPUT!" << endl;
			return 1;
		}
		cout <<  numberOne + numberTwo << endl;
		return 0;
	}

	if (choice == 2) {
		cout << "Please enter two numbers: " << endl;
		cin >> numberOne >> numberTwo;
		if (!cin) {
			cout << "BAD INPUT!" << endl;
			return 1;
		}
		cout <<  numberOne - numberTwo << endl;
		return 0;
	}

	if (choice == 3) {
		cout << "Please enter two numbers: " << endl;
		cin >> numberOne >> numberTwo;
		if (!cin) {
			cout << "BAD INPUT!" << endl;
			return 1;
		}
		cout <<  numberOne * numberTwo << endl;
		return 0;
	}

	if (choice == 4) {

		cout << "Please enter two numbers: " << endl;
		cin >> numberOne >> numberTwo;
		if (numberTwo == 0) {
			cout << "BAD INPUT!\n";
			exit(1);
		}

		if (!cin) {
			cout << "BAD INPUT!" << endl;
			return 1;
		}
		cout << numberOne / numberTwo << endl;
		return 0;
	}

	if (choice == 5) {
		cout << "Please enter two numbers: " << endl;
		cin >> numberOne >> numberTwo;
		if (numberTwo == 0) {
			cout << "BAD INPUT!\n";
			exit(1);
		}

		if (!cin) {
			cout << "BAD INPUT!" << endl;
			return 1;
		}
		cout << numberOne % numberTwo << endl;
		return 0;
	}

	else {
		cout << "BAD INPUT!\n";
		exit(1);
	}
}
