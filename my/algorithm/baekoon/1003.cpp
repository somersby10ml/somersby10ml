#include <iostream>

long long save[100] = { 0, 1, };
long long fibonacci(int n) {
	if (n == 0 || n == 1)
		return save[n];
	else if (save[n] == 0)
		save[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return save[n];
}

int main() {
	int cnt, val;
	std::cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		std::cin >> val;
		if (val == 0)
			std::cout << "1 0" << '\n';
		else
			std::cout << fibonacci(val - 1) << " " << fibonacci(val) << "\n";
	}
	return 0;
}