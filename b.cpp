#include <bits/stdc++.h>
using namespace std;

void sol(int n, vector<int> layers) {

	for (int i = 0; i < n; ++i) {
		if (layers[n - 1] >= n) {
			layers[i] = 1;
		}
		else {
		int start = 0;
		if (layers[i] != 0) {
			if ((i+1) - layers[i] < 0) {
				start = 0;
			}
			else {
				start = (i+1) - layers[i];
			}

			for (int j = start; j <= i; ++j) {
				layers[j] = 1;
			}
		}
	}
	}

	for (int h : layers){ 
		cout << h << ' ';
	}


}


int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> layers(n);
		for(int i = 0; i < n; ++i) cin >> layers[i];
		sol(n, layers);
		cout << '\n';
	}


	return 0;
}

//create vector that contains all nums
//use one big for loop
//within for loop, if a number other than 0 is encountered
//use another loop that begins i-index and make all numbers 1