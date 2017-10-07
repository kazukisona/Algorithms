#include <iostream>

using namespace std;

int calcGCD(int num1, int num2);

int main()
{	
	int num1;
	int num2;

	// get num1
	cout << "Input 1: ";
	cin >> num1;

	// get num2
	cout << "Input 2: ";
	cin >> num2;
	cout << endl;

	while (num1 < 1 || num2 < 1)
	{
		if (num1 < 1)
		{
			cout << "Input1 is invalid" << endl;
			cout << "Input 1: ";
			cin >> num1;
		}
		else if (num2 < 1)
		{
			cout << "Input2 is invalid" << endl;
			cout << "Input 2: ";
			cin >> num2;
		}
	}

	cout << "Gretest Common Divisor is: ";
	cout << calcGCD(num1, num2) << endl;
	
	return 0;
}

// Returns the greatest common divisor between num1 and num2
// Both user values should be greater than 1
int calcGCD(int num1, int num2)
{
	int gcd; // greatest common divisior between num1 and num2

	// base case which stops an algorithm
	if (num1 == num2)
		gcd = num1;
	// otherwise, recursive part
	else if (num1 > num2)
	{
		gcd = calcGCD(num1 - num2, num2);
	}
	else // if num2 is greater than num1
	{
		gcd = calcGCD(num1, num2-num1);
	}

	return gcd;
}