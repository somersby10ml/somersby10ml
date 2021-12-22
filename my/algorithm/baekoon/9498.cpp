#include <iostream>
int main() {
	int score = 0;
	char result;
	std::cin >> score;
	if (score >= 90) result = 'A';
	else if (score >= 80) result = 'B';
	else if (score >= 70) result = 'C';
	else if (score >= 60) result = 'D';
	else if (score >= 60) result = 'E';
	else result = 'F';
	std::cout << result << std::endl;
	return 0;
}