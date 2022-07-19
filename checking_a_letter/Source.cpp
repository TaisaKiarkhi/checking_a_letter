#include <iostream>
#include <format>
#include <cctype>
using namespace std;

int main() {
	char letter{};
	cout << "Hello! Enter a letter and the program will check if it is a vowel and if it lowercase or not";
	cout<<"Then the program will output the binary value of the letter: ";
	cin >> letter;

	if (!isalpha(letter)) {
		cout << "Wrong character, try again.";
		return 1;
	}

	if (islower(letter)) {
		cout << "This is a lowercase letter.";
		cout << endl;
	}
	else {
		cout << "This is an uppercase letter";
		cout << endl;
	}

	if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
		cout << "You entered a vowel";
		cout << endl;
	}
	else {
		cout << "You entered a constant";
		cout << endl;
	}
	cout << format("You enter the letter {}. Its binary value is {:b}", letter,letter)<<endl;

	//Output binary value without using formating
	

	return 0;
}