#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b = a % 5;
    int c = a/5 + 1;
    if(!b) c = c - 1;
    cout << c;
}
