#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> number) {
    
    for(int i = 0; i < size; i++) {
        for(int j = 1 + i; j < size; j++) {
            for(int k = 1 + j; k < size; k++) {
                if(number[i] + number[j] + number[k] == 0) answer += 1;
            }
        }
    }
    
    return answer;
}
