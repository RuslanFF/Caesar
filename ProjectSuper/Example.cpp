#include <iostream>
#include <string>
#include "Encrypted.h"

using namespace std;

int main() {
    string original_text, textEncrypted;
    getline(cin, original_text);

    cout << "Encrypted: " << encrypted_text(original_text) << endl;

    textEncrypted = encrypted_text(original_text);

    cout << "Decrypted: " << decrypt_text(textEncrypted) << endl;

    return 0;
}