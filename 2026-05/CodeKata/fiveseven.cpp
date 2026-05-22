#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	return a < b;
}

vector<int> solution (vector<int> answers) {	
	vector<vector<int>> student_answer = 
	{
		{1, 2, 3, 4, 5},
		{2, 1, 2, 3, 2, 4, 2, 5},
		{3, 3, 1, 1, 2, 2, 4, 4, 5, 5}
	};
	vector<int> student_correct = {0, 0, 0};

	
	for (int i = 0; i < answers.size(); i++) {
		for (int j = 0; j < student_answer.size(); j++) {
			if (student_answer[j][i % student_answer[j].size()] == answers[i])
			{
				student_correct[j]++;
			}
		}
	}
	cout << endl;
	vector<int> high_score;
	int _tmp = *max_element(student_correct.begin(), student_correct.end(), compare);
	for (int i = 0; i < student_correct.size(); i++) {
		if (student_correct[i] >= _tmp) {
			high_score.push_back(i + 1);
		}
	}	
    return high_score;
}