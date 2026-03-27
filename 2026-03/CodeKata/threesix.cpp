#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
	if (s.size() > 0 && s.size() <= 8) {
		if (s.size() == 4 || s.size() == 6) {
			for (char c : s) {
				if ((int)c < 48 || (int)c > 57) {
					return false;
				}
			}
			return true;
		}
	}
	return false;
}
