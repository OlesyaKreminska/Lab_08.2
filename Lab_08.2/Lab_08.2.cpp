#include <iostream>
#include <string>
using namespace std;

bool IsAlpha(char c) {
    // ��������, �� ������ � ������� ��� ����� ������
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

string ConvertToUppercaseUntilSpace(const string& s) {
    size_t spacePos = s.find(' ');  // ��������� ������� ������� ������
    if (spacePos == string::npos) {
        spacePos = s.length();  // ���� ���� ������, ������ ���� �����
    }

    string result;
    for (size_t i = 0; i < spacePos; ++i) {
        if (IsAlpha(s[i])) {  // ����������, �� ������ � ������
            result += toupper(s[i]);  // ������������ ����� �� �����
        }
        else {
            result += s[i];  // ������ ������ ��� ���, ���� �� �� �����
        }
    }

    // ������ ������� ����� ���� ������� ������, ���� ���� ����
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
