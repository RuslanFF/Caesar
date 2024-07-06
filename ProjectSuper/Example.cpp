#include <iostream>
#include <string>
#include "Encrypted.h"

using namespace std;

int main() {
    //Example

    string original_text, textEncrypted;
    getline(cin, original_text);

    //Enter in the terminal the text that will be encrypted and decrypted in the future.

    cout << "Encrypted: " << encrypted_text(original_text) << endl;

    textEncrypted = encrypted_text(original_text);

    cout << "Decrypted: " << decrypt_text(textEncrypted) << endl;

    return 0;
}