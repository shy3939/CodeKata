#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for(int i = 1; i <= number; i++) {
        int count = 1;
        
        if(i == 1)  answer += 1;
        else if(i == 2) answer += 2;
        else if(i == 3) answer += 2;
        else {
            for(int j = 1; j <= i/2; j++) {
                if(i % j == 0) count++;
            }
            if(count > limit) {
                count = power;
            }
            answer += count;
        }
    }
    return answer;
}