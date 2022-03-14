#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int n = a + b + c + d;
    cout << n / 60 << "\n" << n % 60;
}
