#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << a / b << '.';

    for (int i = 0; i < 9; i++)
    {
        cout << a % b * 10 / b;
        a = a % b * 10 % b;
    }

}
