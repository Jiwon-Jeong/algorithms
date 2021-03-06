#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int a[10];
void go(vector<int>&num, int start, int index, int n, int m) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i];
			if (i != m - 1)
				cout << ' ';
		}
		cout << "\n";
		return;
	}
	for (int i = start; i < n; start++, i++) {
		a[index] = num[i];
		go(num, start, index + 1, n, m);
	}
}
int main() {
	int n, m;
	cin >> n >> m;
	vector<int> num(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num.begin(), num.end());
	num.erase(unique(num.begin(), num.end()), num.end());
	go(num, 0, 0, num.size(), m);
}