#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(a > 0 && b > 0) cout << 1;
    if(a < 0 && b > 0) cout << 2;
    if(a < 0 && b < 0) cout << 3;
    if(a > 0 && b < 0) cout << 4;
}
