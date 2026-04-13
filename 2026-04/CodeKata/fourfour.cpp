#include <string>
#include <vector>

using namespace std;



int solution(vector<vector<int>> sizes) {
	int max_x = 0;
	int max_y = 0;
	int _tmp;

	for (int i = 0; i < sizes.size(); i++) {
		if (sizes[i][0] < sizes[i][1]) {
			_tmp = sizes[i][0];
			sizes[i][0] = sizes[i][1];
			sizes[i][1] = _tmp;
		}

		max_x = max(max_x, sizes[i][0]);
		max_y = max(max_y, sizes[i][1]);
	}
    return max_x * max_y;
}