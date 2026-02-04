#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while(n >= a) {
        int submit = n / a;         // 빈병을 가져다 준 횟수
        int take = submit * b;      // 가져다 주고 받은 콜라의 수
        int remain = n % a;        // 가져다 주고 남은 빈 병의 수
        n = take + remain;          // 바꾸고 나서 남은 빈 병의 수
        answer += take;
    }
    
    return answer;
}