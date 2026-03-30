#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int size = num_list.size();
    int dif = num_list[size-1] - num_list[size-2];
    answer = num_list;
    
    
    if(dif > 0) answer.push_back(dif);
    else {
        int twice = num_list[size-1] * 2;
        answer.push_back(twice);
    }
    
    return answer;
}