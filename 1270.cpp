#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n,T; cin >> n;
	long long x;
	unordered_map<long long, int> m;

	for (int i = 0; i < n; i++) {
	  bool got = false;
		m.clear();
		cin >> T;
		
		for (int k = 0; k < T; k++) {
			cin >> x;
			if (got) continue;
			m[x]++;
			if (m[x]*2 > T) {
				got = true;
				cout << x << "\n";
			}
		}
		if (!got) cout << "SYJKGW\n";
	}
}
