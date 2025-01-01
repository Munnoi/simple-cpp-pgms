#include <iostream>
using namespace std;

static void solve() {
	int N, M;	
	cin >> N >> M;
	
	int temp;
	temp = N;
	N = M;
	M = temp;

	cout << N << " " << M << endl;
}

int main() {
	int T = 1;
	//cin >> T;
	while (T--) solve();

	return 0;
}
