#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    int answer = 0;
    
    if(num == 1){
        return 0;
    }
    else {
        for(answer = 0; answer < 500; answer++){
            
            if(num == 1){
                return answer;
            }
            
            if(num % 2 == 0){
                num /= 2;
                continue;
            }
            
            if(num % 2 == 1) {
                num = num * 3;
                num = num + 1;
                continue;
            }
        }
    }
    return -1;
}