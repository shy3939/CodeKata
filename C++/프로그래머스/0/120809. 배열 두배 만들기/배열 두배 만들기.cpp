#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {

    int size = numbers.size();
    vector<int> answer(size, 0);
    
    for(int i = 0; i < size; i++) {
        answer[i] = numbers[i] * 2;
    }
    
    return answer;
}