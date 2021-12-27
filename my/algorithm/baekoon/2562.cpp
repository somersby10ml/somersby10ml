#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int i;
	int idx = -1, max = -1;
	for (i = 1; i < 10; i++) {
		int val;
		std::cin >> val;

		if (max == -1) {
			max = val;
			idx = i;
		}
		else {
			if (max < val) {
				max = val;
				idx = i;
			}
		}
	}
	std::cout << max << '\n' << idx;
}