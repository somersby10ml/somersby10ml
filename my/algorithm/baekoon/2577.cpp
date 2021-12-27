#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int a, b, c;
	std::cin >> a >> b >> c;
	int mul = a * b * c;

	int num[10] = { 0, };
	for (int i = 1; i < mul; i *= 10) {
		int c = mul / i % 10;
		num[c]++;
	}

	for (int i = 0; i < 10; i++) {
		std::cout << num[i] << "\n";
	}
}