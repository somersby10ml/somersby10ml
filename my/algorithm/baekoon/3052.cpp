#include <iostream>
#include <unordered_set>

int main() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::unordered_set<int> nums;
	for (int i = 0; i < 10; i++) {
		int num;
		std::cin >> num;

		nums.insert(num % 42);
	}
	std::cout << nums.size() << "\n";
}