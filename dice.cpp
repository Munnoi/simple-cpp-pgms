#include <iostream>
#include <cmath>
using namespace std;

static void solve() {
	int N;	
	cin >> N;
	cout << 7 - N << endl;
}

int main() {
	int T = 1;
	//cin >> T;
	while (T--) solve();

	return 0;
}

// You are given a cubic dice with 6 faces. All the individual faces have a number printed on them. The numbers are in the range of 1 to 6, 
// like any ordinary dice. You will be provided with a face of this cube, your task is to guess the number on the opposite face of the cube.
