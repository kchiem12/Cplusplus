#include <bits/stdc++.h>
using namespace std;

void sol(vector<int> stuff) {
	sort(stuff.begin(), stuff.end());
	int min = stuff[1] - stuff[0] ;
	for(int i = 2; i < stuff.size(); ++i) {
		if (stuff[i] - stuff[i - 1] < min)
			min = stuff[i] - stuff[i - 1];
	}
	cout << min << "\n";
}

int main() {

	int t, n, s;
	vector<int> stuff;
	cin >> t;
	while(t--) {
		cin >> n;
		while(n--) {
			cin >> s;
			stuff.push_back(s);
		}
		sol(stuff);
		stuff.clear();
		
		/*
		getline(cin, s);
		istringstream bruh(s);
		vector<int> stuff;
		int temp;
		while(bruh >> temp) stuff.push_back(temp);
		sol(stuff);
		*/
	}


	return 0;
}