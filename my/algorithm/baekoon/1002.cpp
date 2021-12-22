#include <iostream>
#include <cmath>
int main() {
	int cnt = 0;
	std::cin >> cnt;
	for (int i = 0; i < cnt; i++) {

		int x1, y1, r1, x2, y2, r2;
		std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int result = 0;
		double distanse = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		int subtract = r1 > r2 ? r1 - r2 : r2 - r1;

		if (distanse == 0 && r1 == r2) result = -1;
		else if (distanse < r1 + r2 && (subtract < distanse)) result = 2;
		else if (distanse == r1 + r2 || distanse == subtract) result = 1;

		std::cout << result << std::endl;
	}
	return 0;
}