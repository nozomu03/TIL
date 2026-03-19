#include <string>
#include <vector>

std::string solution(std::string s) {
	std::string c;
	int index;
	if (s.size() % 2 == 1) {
		index = s.size() / 2;
		c = s[index];
	}
	else{
		index = s.size() / 2;
		c = s.substr(index - 1, 2);
	}
	return c;
}