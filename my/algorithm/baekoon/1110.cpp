#include <iostream>
int newNumber(int val) {
	int a, b;
	if (val >= 10) {
		a = val / 10;
		b = val % 10;
	}
	else {
		a = 0;
		b = val;
	}
	return b * 10 + (a + b) % 10;
}

int main() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int first;
	std::cin >> first;

	int val(first), cnt(1);
	while (true) {
		val = newNumber(val);
		if (val == first) {
			break;
		}
		cnt++;
	}
	std::cout << cnt << "\n";
}