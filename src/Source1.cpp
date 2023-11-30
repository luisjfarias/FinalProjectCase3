#include <iostream>
#include <string>
using namespace std;

int reinput(int option) {
	cout << "Please select option 1 or option 2 by typing 1 or 2 and press enter.\n";
	cin >> option;
	cin.clear();
	cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
	char message[100], E[100], D[100];
	int option = 0;

	cout << "Welcome! This program has been designed to encrypt/decrypt "
		<< "a message using the Vigenre Cipher method. What would you like to do? "
		<< "\n1. Encrypt\n2. Decrypt\n";
	cin >> option;
	while (option != 1 && option != 2) {
		reinput(option);
	}

	if (option == '1') {
		cin.getline(message, 100);
		for (int i = 0; message[i] != '\0'; i++) {
			if (message[i] < 'A' || message[i] > 'Z')
				return
		}
	}
	return 0;
}