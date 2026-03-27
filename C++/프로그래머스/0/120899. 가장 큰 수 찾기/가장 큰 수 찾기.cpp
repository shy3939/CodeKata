#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int MaxNum = -1;
    int MaxI = -1;
    int size = array.size();
    
    for(int i = 0; i < size; i++) {
        if(array[i] > MaxNum) {
            MaxNum = array[i];
            MaxI = i;
        }
    }
    answer.push_back(MaxNum);
    answer.push_back(MaxI);
    
    return answer;
}