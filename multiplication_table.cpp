#include <iostream>
using namespace std;

static void solve() {
	int N;	
	cin >> N;
	for (int i = 0; i <= 10; i++) cout << N << " X " << i << " = " << N * i << endl;
}

int main() {
	int T = 1;
	//cin >> T;
	while (T--) solve();

	return 0;
}
