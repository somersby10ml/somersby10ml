#include <iostream>
#include <vector>

int main() {
	int n, num;
	std::cin >> n >> num;

	std::vector<int> result;
	for (int i = 0; i < n; i++) {
		int val;
		std::cin >> val;

		if (val < num)
			result.push_back(val);
	}

	for (int n : result)
		std::cout << n << " ";

	return 0;
}