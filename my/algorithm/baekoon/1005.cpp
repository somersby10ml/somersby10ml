#include <iostream>
#include <vector>
#include <queue>

#define MAX_BUFFER 1002
int main() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int cnt;
	std::cin >> cnt;

	while (cnt--) {
		int cntBuilding, cntConnect;
		std::cin >> cntBuilding >> cntConnect;

		std::vector<int> adj[MAX_BUFFER];
		std::queue<int> q;
		int inDeg[MAX_BUFFER] = { 0, };
		int result[MAX_BUFFER] = { 0, };
		int goal = 0;

		int time[1002] = { 0, };
		for (int i = 1; i <= cntBuilding; i++) {
			std::cin >> time[i];
		}

		while (cntConnect--) {
			int X, Y;
			std::cin >> X >> Y;
			adj[X].push_back(Y);
			inDeg[Y]++;
		}

		std::cin >> goal;

		for (int i = 1; i <= cntBuilding; i++) {
			if (inDeg[i] == 0) {
				q.push(i);
			}
			result[i] = time[i];
		}

		while (!q.empty()) {
			int cur = q.front();
			q.pop();

			for (size_t i = 0; i < adj[cur].size(); i++) {
				int next = adj[cur][i];
				inDeg[next]--;
				result[next] = std::max(result[next], result[cur] + time[next]);
				if (inDeg[next] == 0)
					q.push(next);
			}
		}

		std::cout << result[goal] << std::endl;
	}

	return 0;
}
