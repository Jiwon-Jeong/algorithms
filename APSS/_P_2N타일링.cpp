#include <string>
#include <vector>
using namespace std;

int solution(int n) {
	vector<int> v(n + 1);
	v[1] = 1;
	v[2] = 2;
	for (int i = 3; i <= n; i++) {
		v[i] = v[i - 1] + v[i - 2];
		v[i] %= 1000000007;
	}
	return v[n];
}