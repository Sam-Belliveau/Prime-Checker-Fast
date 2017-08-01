# Prime Checker

### Fast

You may put this in your code if you credit me:

```cpp
#include <iostream> // cout and cin
#include <cmath> // sqrt()

using namespace std; // cout and cin

void prime(long long int number) {
	// Establishing Variables
	long long int i = 5;
	int w = 2;
	const long long int lim = sqrt(number);

	// Gets 2 and 3 out of the way
	if (number == 1) { cout << number << " is hard to classify. \n";  return; }
	if (number == 2) { cout << number << " is Prime. \n";  return; }
	if (number == 3) { cout << number << " is Prime. \n";  return; }

	// Tests Odd Ball Factors
	if (number % 2 == 0) { cout << number << " is not Prime. \n";  return; }
	if (number % 3 == 0) { cout << number << " is not Prime. \n";  return; }

	while (i <= lim) {
		if (number % i == 0) { cout << number << " is not Prime. \n";  return; }
		// Tests Number
		i = i + w; // Increments number
		w = 6 - i; // We already tested 2 and 3
		// So this removes testing multepules of this
	}
	cout << number << " is Prime. \n"; return;
}
```
This Checkes every number that is not a factor of 2 or 3 to see if they are factors
