#include<iostream>
using namespace std;

//function declaration
char grades(int input);

int main() {
	int input;
	cout << "Enter your grade 1-100." << endl;
	cin >> input;
	cout << grades(input);
}

char grades(int input) {
	if (input >= 90)
		return 'A';
	else if (input >= 80)
		return 'B';
	else if (input >= 70)
		return 'C';
	else if (input >= 60)
		return 'D';
	else if (input >= 50)
		return 'F';
}
