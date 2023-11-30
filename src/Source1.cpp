#include <iostream>
#include <string>
using namespace std;

int main() {
	string message;
	bool encrypt = false;

	cout << "Welcome! This program has been designed to encrypt/decrypt"
		<< "a message using the Vigenre Cipher method. What would you like to do?";
	cin >> encrypt;
	if (encrypt != 0 || encrypt != 1) {
		do {
			cout << "Please select option 1 or option 2 by typing 1 or 2 and press enter.";
			cin >> encrypt;
		} while (encrypt != 0 || encrypt != 1);
	} 
	cout << "Bye!"
	return 0;
}