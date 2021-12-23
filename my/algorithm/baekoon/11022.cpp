#include <iostream>
int main() {
	int count = 0;
	std::cin >> count;
	for (int i = 1; i <= count; i++) {
		int num1, num2;
		std::cin >> num1 >> num2;
		printf("Case #%d: %d + %d = %d\n", i, num1, num2, num1 + num2);
	}
	return 0;
}