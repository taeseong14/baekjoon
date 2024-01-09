#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;
    string s[N]; // RGB => RRB => VVV
    string s2[N]; // visited log
    for (int i = 0; i < N; i++) {
        string z;
        cin >> z;
        s2[i] = z; s[i] = z;
    }
    
    queue<pair<int, pair<int, int>>> q; // <len, <x, y>>
    
    for (int k = 0; k < 2; k++) {
        int x = 0, y = 0;
        int r = 0;
        int ans = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (s2[i][j] != 'V') {
                    char a = s[i][j];
                    if (a == 'G') s[i][j] = 'R';
                    s2[i][j] = 'V';
                    pair<int, pair<int, int>> p;
                    p.first = ++r; // (i=0) + 1
                    p.second.first = i; p.second.second = j;
                    q.push(p);
                    while (!q.empty()) {
                        auto f = q.front();
                        x = f.second.first, y = f.second.second;
                        r = f.first;
                        q.pop();
                        p.second.first = x; p.second.second = y;
                        if (y < N-1 && s2[x][y + 1] == a) { // 우
                            if (a == 'G') s[x][y + 1] = 'R';
                            s2[p.second.first = x][p.second.second = y + 1] = 'V';
                            q.push(p);
                        }
                        if (x < N-1 && s2[x + 1][y] == a) { // 하
                            if (a == 'G') s[x + 1][y] = 'R';
                            s2[p.second.first = x + 1][p.second.second = y] = 'V';
                            q.push(p);
                        }
                        if (y > 0 && s2[x][y - 1] == a) { // 좌 
                            if (a == 'G') s[x][y - 1] = 'R';
                            s2[p.second.first = x][p.second.second = y - 1] = 'V';
                            q.push(p);
                        }
                        if (x > 0 && s2[x - 1][y] == a) { // 상 
                            if (a == 'G') s[x - 1][y] = 'R';
                            s2[p.second.first = x - 1][p.second.second = y] = 'V';
                            q.push(p);
                        }
                    }
                    ans++;
                }
            }
        }
        cout << ans << " ";
        ans = 0;
        
        for (int l = 0; l < N; l++) s2[l] = s[l];
    }
}
