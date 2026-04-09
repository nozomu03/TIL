#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> number) {
    int _tmp = 0;
    int answer = 0;

    sort(number.begin(), number.end());
    vector<int> mask(number.size(), 1);
    for (int i = 0; i < 3; i++) {
        mask[i] = 0;
    }
    do {
        for (int i = 0; i < number.size(); i++) {
            if (mask[i] == 0) {
                _tmp += number[i];
            }
        }        
        if (_tmp == 0) {
            answer++;
        }
        _tmp = 0;

    } while (next_permutation(mask.begin(), mask.end()));
    return answer;
}