#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int size = num_list.size();
    vector<int> answer(size, 0);
    int count = 0;
    for(int i = size-1; i >= 0; --i) {
        answer[count] = num_list[i];
        count++;
    }
    
    return answer;
}