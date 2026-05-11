#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<char, int> last;

    for (int i = 0; i < s.length(); i++) {
        if (last.find(s[i]) == last.end()) {
            answer.push_back(-1);
        } else {
            answer.push_back(i - last[s[i]]);
        }
        
        last[s[i]] = i;
    }

    return answer;
}