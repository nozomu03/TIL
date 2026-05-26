#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
	int painted_index = 0;

	for (int i = 0; i < section.size(); i++) {
		if (painted_index < section[i]) {
			answer++;
			painted_index = section[i] + m - 1;
		}
	}


    return answer;
    
}