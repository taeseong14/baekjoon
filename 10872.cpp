#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;
    int n = 1;
    for(int i = 1;i <= input;i++) {
        n *= i;
    }
    cout << n;
}
