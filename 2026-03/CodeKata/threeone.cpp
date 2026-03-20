#include <string>
#include <vector>


std::string solution(int n) {
	std::string str;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			str.append("수");
		}
		else {
			str.append("박");
		}
	}	
	return str;

}