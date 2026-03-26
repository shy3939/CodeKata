#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {

    int size = numbers.size();
    
    for(int i = 0; i < size; i++) {
        numbers[i] = numbers[i] << 1;
    }
    
    return numbers;
}