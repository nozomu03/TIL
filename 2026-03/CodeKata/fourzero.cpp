#include <string>
#include <vector>

using namespace std;

int solution(int n) {
	int answer = 0;
	int mul_val = 1;
	string temp;	
	while (n > 0) {
		temp.append(to_string(n % 3));
		n /= 3;
	}	
	
	for (auto i = temp.rbegin(); i < temp.rend(); i++) {
		answer += (*i - '0') * mul_val;
		mul_val *= 3;
	}
    return answer;
}