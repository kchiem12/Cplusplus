#include <bits/stdc++.h>
using namespace std;

void sol(string s) {
	string a;
	a+=s[0];
	int count = 1;
	for (int i = 1; i < s.length(); ++i) {
		string g(1, s[i]);
		if (a != g) {
			count--;
		} else {
		count++;
		}
		if (count < 0)
			break;
	}
	if(count == 0) 
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
}


int main() {
	int t;
	string a;
	cin >> t;
	while(t--) {
		cin >> a;
		sol(a);
	}



	return 0;
}