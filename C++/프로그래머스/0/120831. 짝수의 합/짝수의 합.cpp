#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i = 0; 2 * i < n+1; i++){
        answer += 2 * i;
    }
    return answer;
}