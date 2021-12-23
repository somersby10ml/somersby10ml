#include <iostream>
int main() {
	int count = 0;
	std::cin >> count;
	for (int i = 1; i <= count; i++) {
		int num1, num2;
		std::cin >> num1 >> num2;
		std::cout << "Case #" << i << ": " << num1 + num2 << "\n";
	}
	return 0;
}