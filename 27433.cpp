#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long res = 1;
    while(--n >= 0) res *= n + 1;
    cout << res;
}
