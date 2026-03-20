#include <string>
#include <vector>

using namespace std;

int solution(string message) {
    int answer = 0;
    
    for(char c : message) answer++;
    answer *= 2;
    return answer;
}