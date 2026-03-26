using namespace std;

long long solution(int price, int money, int count) {
    long long answer = 0;

    if(price < 1 || price > 2500){
        return 0;
    }
    
    if(money < 1 || money > 1000000000){
        return 0;
    }
    
    if(count < 1 || count > 2500){
        return 0;
    }
    
    for (int i = 1; i <= count; i++) {
        answer += price * i;
    }

    answer -= money;

    if (answer <= 0) {
        answer = 0;
    }

	return answer;

}