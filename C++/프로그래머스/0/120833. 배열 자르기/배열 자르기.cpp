#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    int result = num2 - num1 + 1;
    int count = 0;
    vector<int> answer(result, 0);
    int size = numbers.size();
    
    for(int i = num1; i <= num2; i++) {
        answer[count] = numbers[i];
        count++;
    }

    
    return answer;
}