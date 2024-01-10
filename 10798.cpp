#include <iostream>
using namespace std;

int main() {
    string s;
    string s2[15];
    for (int i = 0; i < 5; i++) {
        cin >> s;
        for (int j = 0; j < s.length(); j++) s2[j] += s[j];
    }
    for (int i = 0; i < 15; i++) cout << s2[i];
}
