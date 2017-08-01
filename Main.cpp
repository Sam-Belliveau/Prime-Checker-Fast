#include <iostream> // cout and cin
#include <cmath> // sqrt()

using namespace std; // cout and cin

void prime(long long int number) {
	// Establishing Variables
	long long int i = 5;
	int w = 2;
	const long long int lim = sqrt(number);

	// Gets 2 and 3 out of the way
	if (number % 2 == 0) { cout << number << " is not Prime. \n";  return; }
	if (number % 3 == 0) { cout << number << " is not Prime. \n";  return; }

	while (i <= lim) {
		if (number % i == 0) { cout << number << " is not Prime. \n";  return; }
		// Tests Number
		i = i + w; // Increments number
		w = 6 - i; // We already tested 2 and 3
	}
	cout << number << " is Prime. \n"; return;
}
int main()
{
	long long int input; // Establishes Variable
	while (1) {
		cout << "Enter Number: ";
		cin >> input; // Enter Input
		if (cin.fail()) { cout << "\nInput Failed!\n\n\n"; cin.clear(); cin.ignore(INT64_MAX, '\n'); } // Check For Failed Input
		else { prime(input); cout << "\n\n"; } // Print Result
	}
}

