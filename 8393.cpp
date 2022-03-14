#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int n = 0;
    for(int i=1;i<=a;i++) {
        n += i;
    }
    cout << n;
}
