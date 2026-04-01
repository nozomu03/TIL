#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int lcm(int a, int b, int c) {
	return (a * b) / c;
}

vector<int> solution(int n, int m) {
	vector<int> answer;

	if (n > m) {
		swap(n, m);
	}	
	answer.push_back(gcd(n, m));
	answer.push_back(lcm(n, m, answer[0]));
    return answer;
}