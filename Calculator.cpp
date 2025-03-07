#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	char o;

	cout << "Number 1: ";
	cin >> n1;
	cout << "Number 2: ";
	cin >> n2;
	cout << "Operation (a - addition, s - subtraction, m - multiplication, d - division, q - quotient): ";
	cin >> o;

	int result;

	if (o == 'a') {
		result = n1 + n2;
	}
	else if (o == 's') {
		result = n1 - n2;
	}
	else if (o == 'm') {
		result = n1 * n2;
	}
	else if (o == 'd') {
		result = n1 / n2;
	}
	else if (o == 'q') {
		result = n1 % n2;
	}
	else {
		cout << "Invalid operation";
		exit(1);
	}

	cout << "Answer: " << result << endl;

	return 0;
}