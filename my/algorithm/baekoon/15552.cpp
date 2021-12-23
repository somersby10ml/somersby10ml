#include <iostream>
int main() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);
	int cnt = 0;
	std::cin >> cnt;
	for (int i = 1; i <= cnt; i++) {
		int num1, num2;
		std::cin >> num1 >> num2;
		std::cout << num1 + num2 << "\n";
	}
	return 0;
}