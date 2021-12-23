#include <iostream>
int main() {
	int level = 0;
	std::cin >> level;
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", level, i, level * i);
	}
	return 0;
}