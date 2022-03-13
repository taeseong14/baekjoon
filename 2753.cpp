#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if((!(a%4) && (a%100)) || !(a%400)) cout << 1;
    else cout << 0;
}
