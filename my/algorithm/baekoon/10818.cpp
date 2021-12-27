#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int cnt;
	int min = 1000000, max = -1000000;
	std::cin >> cnt;
	while (cnt--) {
		int val;
		std::cin >> val;

		if (min > val)
			min = val;

		if (max < val)
			max = val;
	}
	std::cout << min << ' ' << max << "\n";
}