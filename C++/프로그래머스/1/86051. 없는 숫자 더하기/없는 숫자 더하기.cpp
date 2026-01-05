#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int sum = 0;
    for(int i = 1; i < 10; i++){
        sum += i;
    }
    
    for(auto it : numbers){
        answer += static_cast<int>(it);
    }
    
    answer = sum - answer;
    
    return answer;
}