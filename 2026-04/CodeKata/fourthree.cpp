#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    string _tmp = "";
    int answer = 0;

    for (int i = 0; i <= t.size() - p.size(); i++) {
        for (int j = i; j < i + p.size(); j++) {           
            _tmp += t[j];
        }

        if (_tmp <= p) {
            answer++;
        }

        _tmp = "";
    }
    return answer;
}