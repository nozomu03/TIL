#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    int _tmp = 0;
    for(int i = 0; i < absolutes.size(); i++){
        if(signs[i]){
            _tmp = absolutes[i];
        }
        else{
            _tmp = absolutes[i] * -1;
        }
        answer += _tmp;
    }
    return answer;
}