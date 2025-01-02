#include <iostream>
#include <cmath>
using namespace std;

static void solve() {
	int N, M;	
	cin >> N >> M;
	int lower = N / M * M;
	int upper = (abs(lower) + M) * (N < 0 ? -1 : 1);

	if (abs(N - lower) < abs(N - upper)) cout << lower << endl;
	else if (abs(N - lower) > abs(N - upper)) cout << upper << endl;
	else cout << ((abs(lower) < abs(upper)) ? upper : lower) << endl;
}

int main() {
	int T = 1;
	//cin >> T;
	while (T--) solve();

	return 0;
}

/* Given two integers n and m (m != 0). Find the number closest to n and divisible by m. If there is more than one such number, then output the one having maximum absolute value. */
