#include <iostream>
#include <string>
using namespace std;

// setting up global variables
string message, K;
int j = 0;
int option;

// function to encrypt the message
void encrypt() {
    // iterates through the message string
    for (int i = 0; message[i] != '\0'; i++) {
        // check if K[i] is the end of the string
        if (K[j] == '\0') {
            // returns counter to the start of the string to do proper encryption
            j = 0;
        }
        // encrypts the message by applying the formula E(i) = (Pi + Ki) mod 26
        //'A' must be added to get the proper ASCII value as the formula has letters
        //numbered 0-25 converts integer optained from formula to character and sets
        // message[i] equlal to the new character
        message[i] = char(((message[i] + K[j]) % 26) + 'A');
        j++;
    }
}

// funciton decrypts the message
void decrypt() {
    // iterates through the message string
    for (int i = 0; message[i] != '\0'; i++) {
        // check if K[i] is the end of the string
        if (K[j] == '\0') {
            // returns counter to the start of the string to do proper decryption
            j = 0;
        }
        // decrypts the message by applying the formula D(i) = (Pi - Ki + 26) mod 26
        //'A' is added to give proper ASCII value
        // converts integer optained from formula to character and sets message[i]
        // equlal to the new character
        message[i] = char(((message[i] - K[j] + 26) %26) + 'A');
        j++;
    }
}

// function asking for message or key input
void input(char o) {
    switch (o) {
    case 'm':
        cout << "Enter the message: ";
        cin >> message;
        break;
    case 'k':
        cout << "Enter the key: ";
        cin >> K;
        break;
    default:
        break;
    }
}

void op() {
    //ask for option input
    cin >> option;
    while (option != 1 && option != 2) {  //if not 1 or 2 then it will continue to iterate through until either is inputed
        cout << "Invalid option! Please select 1 or 2." << endl;  //error message
        cin >> option;
    }
    switch (option) {
    case 1:  //calls encrypt function if 1 is selected
        encrypt();
        break;
    case 2:  //calls encrypt function if 2 is selected
        decrypt();
        break;
    default:
        break;
    }
}

//main function
int main() {
    // displaying welcome message and prompts for user input and instrucitons
    cout << "Welcome! This program has been designed to encrypt and decrypt a "
        "message using the Vigenere Cipher algorithm.\n"
        << "Please enter the message and the key, then select whether you "
        "want to encrypt or decrypt a message. Only alpha/capital letters "
        "will be allowed. No whitespace or other special characters accepted."
        << endl;
    //calls input function with character 'm' to get message input
    input('m');
    //interates through message to check if any letters are not capital
    for (int i = 0; message[i] != '\0'; i++) {
        //if not capital letters then it sets i=0 and calls for the message to be inputed agian
        if (message[i] < 'A' || message[i] > 'Z') {
            //displays error message
            cout << "Please only input capital/alpha characters. Spaces are "
                "allowed.\n";
            input('m');
            i = 0;
        }
    }
    //calls input function with character 'k' to get key input
    input('k');
    //iterates through key to check if any letters are not capital
    for (int i = 0; K[i] != '\0'; i++) {
        if (K[i] < 'A' || K[i] > 'Z') {
            //error message displayed
            cout << "Please only input capital/alpha characters. Spaces are "
                "allowed.\n";
            //calls for key input again
            input('k');
            //sets i=0 to iterate through key again
            i = 0;
        }
    }
    //displays menu prompting user to select encryption or decryption
    cout << "\nWould you like to encrypt or decrypt the message?"
        << "\n1. Encrypt\n2. Decrypt" << endl;
    //op function called to get user input
    op();
    //Prints the resulting message
    cout << "Result: " << message;
    return 0;
}
