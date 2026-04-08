#include <string>

using namespace std;

string solution(string s) {
	int count = 0;

	for (auto it = s.begin(); it != s.end(); it++) {
		if (*it == ' ') {
			count = 0;
		}
		else {
			if (count % 2 == 0) {
				if (*it - 'Z' > 0) {
					*it -= 32;
				}
			}
			else if (count % 2 == 1) {
				if (*it - 'a' < 0) {
					*it += 32;
				}
			}
			count++;
		}
	}
    return s;
}