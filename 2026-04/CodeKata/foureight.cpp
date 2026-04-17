#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> _tmp;
	vector<int> answer;

	for (vector<int> command : commands) {
		for (int i = command[0] - 1; i < command[1]; i++) {
			_tmp.push_back(array[i]);			
		}				
		sort(_tmp.begin(), _tmp.end());
		answer.push_back(_tmp[command[2] - 1]);
		_tmp = {};
	}
    return answer;
}