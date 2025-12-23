#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    int b = num1%num2;
    int a = (num1 - b)/num2;
    answer = a;
    
    return answer;
}