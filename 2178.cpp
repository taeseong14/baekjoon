#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    string input[N];
    for (auto &e : input) cin >> e;
    queue<pair<int, pair<int, int>>> a;
    int x = 0, y = 0;
    int idk = 1;
    while (true) {
        if (x == (N-1) && y == (M-1)) {
            break;
        }
        pair<int, pair<int, int>> p;
    
        p.first = idk + 1;
        p.second.first = x;
        p.second.second = y;
        if (x < (N-1) && input[x + 1][y] == '1') {
            input[p.second.first = x + 1][y] = '2';
            a.push(p);
        }
        if (y < (M-1) && input[x][y + 1] == '1') {
            input[p.second.first = x][p.second.second = y + 1] = '2';
            a.push(p);
        }
        if (x > 0 && input[x - 1][y] == '1') {
        input[p.second.first = x - 1][p.second.second = y] = '2';
            a.push(p);
        }
        if (y > 0 && input[x][y - 1] == '1') {
        input[p.second.first = x][p.second.second = y - 1] = '2';
            a.push(p);
        }
        
        auto fro = a.front();
        x = fro.second.first; y = fro.second.second;
        idk = fro.first;
        a.pop();
    

    }
    cout << idk;
}
