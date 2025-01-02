#include <iostream>
using namespace std;

static bool is_ap(int a[], int n) {
	if (n == 1) return true;
	int d = a[1] - a[0];

	for (int i = 2; i < n; i++)
		if (a[i] - a[i - 1] != d)
			return false;

	return true;
}

static void solve() {
	int arr[] = { 0, 5, 10, 15, 20, 25 }; // ap series.
	int N = sizeof(arr) / sizeof(arr[0]);
	cout << is_ap(arr, N) << endl;
}

int main() {
	int T = 1;
	//cin >> T;
	while (T--) solve();

	return 0;
}
