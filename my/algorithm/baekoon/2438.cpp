#include <iostream>
int main() {
	int count = 0;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
		for (int j = 0; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return 0;
}