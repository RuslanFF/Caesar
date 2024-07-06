#include "Encrypted.h"

std::string encrypted_text(std::string text, int offset) {
    auto len = text.size();
    char ch;
    std::string encryptedText;

    if (text.empty()) return ""; //Remake

    for (int i = 0; i < len; i++) {
        ch = text[i];
        ch += offset;
        encryptedText += ch;
    }
    return encryptedText;
}

std::string decrypt_text(std::string text, int offset) {
    auto len = text.size();
    char ch;
    std::string decryptedText;

    if (text.empty()) return ""; //Remake

    for (int i = 0; i < len; i++) {
        ch = text[i];
        ch -= offset;
        decryptedText += ch;
    }

    return decryptedText;
}
