#include <iostream>
using namespace std;

static void solve() {
	int N;
	cin >> N;
	cout << (N % 2 ? "Odd" : "Even") << endl;
}

int main() {
	int T = 1;
	//cin >> T;
	while (T--) solve();

	return 0;
}
