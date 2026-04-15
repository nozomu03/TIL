#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string s) {
	map<string, string> replace_str;

	replace_str["zero"] = "0";
	replace_str["one"] = "1";
	replace_str["two"] = "2";
	replace_str["three"] = "3";
	replace_str["four"] = "4";
	replace_str["five"] = "5";
	replace_str["six"] = "6";
	replace_str["seven"] = "7";
	replace_str["eight"] = "8";
	replace_str["nine"] = "9";

	for (auto it : replace_str) {		
		while(s.find(it.first) != string::npos){
			s.replace(s.find(it.first), it.first.length(), it.second);
		}
	}
    return stoi(s);
}