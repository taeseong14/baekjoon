#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int t = a * 60 + b -45;
    if(t < 0) t = 24 * 60 + t;
    cout << t/60 << " " << t%60;
}
