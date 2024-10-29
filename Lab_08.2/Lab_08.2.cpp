#include <iostream>
#include <string>
using namespace std;

bool IsAlpha(char c) {
    // Перевіряє, чи символ є великою або малою літерою
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

string ConvertToUppercaseUntilSpace(const string& s) {
    size_t spacePos = s.find(' ');  // Знаходимо позицію першого пробілу
    if (spacePos == string::npos) {
        spacePos = s.length();  // Якщо немає пробілу, беремо весь рядок
    }

    string result;
    for (size_t i = 0; i < spacePos; ++i) {
        if (IsAlpha(s[i])) {  // Перевіряємо, чи символ є буквою
            result += toupper(s[i]);  // Перетворюємо літери на великі
        }
        else {
            result += s[i];  // Додаємо символ без змін, якщо це не літера
        }
    }

    // Додаємо частину рядка після першого пробілу, якщо вона існує
    if (spacePos < s.length()) {
        result += s.substr(spacePos);
    }

    return result;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    string processedStr = ConvertToUppercaseUntilSpace(str);
    cout << "Processed string: " << processedStr << endl;

    return 0;
}
