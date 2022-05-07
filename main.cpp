#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n;
	cin >> n;

	n -= 1;
	auto ans = ll{ 1 };
	auto b = ll{ 2 };
	while (0 < n) {
		auto s = ll{ 0 };
		if (2 == b) {
			s = 5;
		}
		else {
			s = b * b + (b - 1) * (b - 1);
		}

		if (s <= n) {
			n -= s;
			ans += 1;
			b += 1;
		}
		else {
			break;
		}
	}

	cout << ans;
	
	return 0;
}