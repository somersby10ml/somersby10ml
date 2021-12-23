#include <iostream>
int main() {
	int count = 0;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
		int padding = count - i - 1;
		for (int j = 0; j < padding; j++) {
			std::cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return 0;
}