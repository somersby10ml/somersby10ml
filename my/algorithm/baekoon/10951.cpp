#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int a, b;
	while (true) {
		std::cin >> a >> b;
		if (std::cin.eof())
			break;

		std::cout << a + b << "\n";
	}
	return 0;
}
