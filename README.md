# Final Project - Case 3
**Author:** _Luis Farias_
**Date Publish:** _12/04/23_
## Purpose
The purpose of this program is to encrypt and decrypt a message with a key using the Vigenere Cipher algorithm. The program ask for an input to either encrypt or decrypt the message and displays the resulting message. The algorithm essentailly takes a text to be encrypted and using the Vigenere char finds the letter that corrispones to both letters. Then the modulus 26 operation is done to get the proper number displaced to get the resulting character number. For this program, the ASCII value of 'A' is added to this value to get the proper character. For decryption, the two characters being compared are substracted then added to 26 to ensure that if the resulting letter is negative it could be evaluated. Then, the modulus 26 operation is done to get the resulting letter value adding the ASCII value 'A' to get the proper character. Also, if the key is shorter in length, then the comparision continues with the message being encrypted/decrypted but just beign compared from the start again. This happens until all characters are converted.
## Instructions For Use
1. Run the 'mian.cpp' file within the 'src' folder to load the program.
2. Welcome message will prompt followed by what characters are allowed. Only alpha/capital letters are allowed.
3. Input the message you want to encrypt/decrypt then press the enter key.
4. Input the key you want to use to encrpt/decrypt the message then press the enter key.
5. Type in '1' to encrypt or '2' to decrypt then press enter.
6. The message will be printed onto the screen following 'Result: '
## Programming Procedure/outline
* The header files 'iostream' and 'string' and called
* Global variables are stated: string message and k; int j = 0; int option;
* encrypt function created without any value returne
  - for loop created to iterate through message string
  - if statement used to check if K[j] is the end of the string. If true then j = 0
  - message[i] = (char)(message[i] + K[j])%26 + 'A' -> This formula is used to find the displacement of the two characters from the Vigenere Cipher chart adding the 'A' ASCII value to give the proper character.
  - j++
* decrypt function created without value returned
  - same format as the encrypt function but the formula for which message[i] equals is as follows: (char)(message[i] - K[j] + 26) %26) + 'A' -> here the values are subtracted from each other then added with 26 to ensure no negative values exist to get the proper character.
* input function created with paramater char o
  - switch function created taking o as a paramater
    - case 'm' prompts a message for user to input the desired message then calls 'cin >> message'
    - case 'k' prompts a message for user to input the key then calls 'cin >> K'
    - default case created
* op funciton created without a return value
  - 'cin >> option' called for option input
  - while option isn't 1 or 2 then an error messages is printed the 'cin >> option' is called for reinput of the option
  - switch funciton with paramater option is created
    - case 1 calls encrypt() while case 2 calls decrypt()
* main funciton
  - Welcome message is printed onto the screen with the instrucitons for input
  - input('m') is called
  - for loop created to iterate through message
    - if statement checks whether the message is all capitals; if not then an error message is printed followed by input('m') being called for reinput
    - i = 0 to set for loop back to the start of message
  - input('k') is called
  - for loop created to iterate through message with an if statement to check if all capital characters
    - if not all capitals then error message is displayed with input('k') being called agian for reinput
    - i = 0 to set for loop back to the begining
  - option menu is displayed with op() being called after
  - once all the operations have been completed then the result is printed on the screen
  - program exits
