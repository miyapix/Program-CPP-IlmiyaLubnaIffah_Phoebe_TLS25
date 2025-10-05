#include <iostream>
#include <string>
using namespace std;

// Fungsi membalik string secara manual
string reverseString(const string &input) {
    string reversed = "";
    for (int i = input.length() - 1; i >= 0; i--) {
        reversed += input[i];
    }
    return reversed;
}

// Fungsi membuat kata sandi dengan ASCII
string createPassword(const string &original) {
    string password = "";
    for (char c : original) {
        int asciiValue = int(c) + 3;
        password += char(asciiValue);
    }
    return password;
}

// Fungsi mendapatkan sebagian kata asli (setengah pertama)
string getPartialOriginal(const string &password) {
    string partial = "";
    for (int i = 0; i < password.length() / 2; i++) {
        int asciiValue = int(password[i]) - 3;
        partial += char(asciiValue);
    }
    return partial;
}

int main() {
    string kataAsli;
    cout << "Masukkan Kata Asli: ";
    cin >> kataAsli;

    string sandi = createPassword(kataAsli);
    cout << "Kata sandi: " << sandi << endl;

    string partial = getPartialOriginal(sandi);
    cout << "Sebagian kata asli: " << partial << endl;

    string kataTerbalik = reverseString(kataAsli);
    cout << "Kata asli terbalik: " << kataTerbalik << endl;

    return 0;
}
