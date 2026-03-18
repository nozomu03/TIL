#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {    
	auto index = arr.begin();

	for (auto i = arr.begin(); i < arr.end(); i++) {		
		if (*index > *i) {
			index = i;
		}
	}
	arr.erase(index);
    if(arr.size() == 0){
        arr.push_back(-1);
    }
    return arr;
}