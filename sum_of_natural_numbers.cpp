#include <iostream>
using namespace std;

static void solve() {
	int N;	
	cin >> N;
	int sum = 0;
	for (int i = 1; i <= N; i++) sum += i;
	cout << sum << endl;
}

int main() {
	int T = 1;
	//cin >> T;
	while (T--) solve();

	return 0;
}
