#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    int N; cin >> N;
    stack<int> s;
    int a;
    int j = 0;
    string prints = "";
    for (int i = 0; i < N; i++) {
        cin >> a;
        if (!s.empty() && s.top() == a) {
            s.pop(); prints += "-\n";
            continue;
        }
        while (true) {
            if (j+1 > N || j+1 > a) break;
            j++;
            s.push(j); prints += "+\n";
        }
        if (!s.empty() && s.top() == a) {
            s.pop(); prints += "-\n";
        } 
    }
    if (s.empty()) cout << prints;
    else cout << "NO";
}
