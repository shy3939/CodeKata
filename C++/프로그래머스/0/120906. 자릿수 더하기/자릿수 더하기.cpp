#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i = 10; i < n*10; i*=10){
        int result = n % i;
        if(result >= 10){
            answer += (result*10)/i;
        }
        else answer += result;
    }
    
    return answer;
}