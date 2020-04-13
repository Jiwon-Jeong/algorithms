#include <iostream>
using namespace std;
int fact[13];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;

	fact[0] = 1;
	fact[1] = 1;
	if (n > 1) {
		for (int i = 2; i <= n; i++) {
			fact[i] = i * fact[i - 1];
		}
	}
	cout << fact[n]<<"\n";
}