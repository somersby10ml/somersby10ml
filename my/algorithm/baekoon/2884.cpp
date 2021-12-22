#include <iostream>
int main() {
	int hour, minute;
	std::cin >> hour >> minute;

	minute = minute - 45;
	if (minute < 0) {
		minute = minute + 60;
		hour--;
	}

	if (hour < 0)
		hour = hour + 24;

	std::cout << hour << " " << minute;
	return 0;
}