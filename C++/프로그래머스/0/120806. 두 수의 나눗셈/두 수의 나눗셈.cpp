#include <string>
#include <vector>


using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    double num = static_cast<double>(num1)/num2;
    answer = static_cast<int>(1000 * num);
    
    return answer;
}