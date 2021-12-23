#include <iostream>
int main() {
	int num = 0;
	int sum = 0;
	std::cin >> num;
	for (int i = 1; i <= num; i++) {
		sum += i;
	}
	std::cout << sum << std::endl;
	return 0;
}



#include <iostream>
int main() {
	int num = 0;
	std::cin >> num;
	std::cout << ((num + 1) * num) / 2 << std::endl;
	return 0;
}