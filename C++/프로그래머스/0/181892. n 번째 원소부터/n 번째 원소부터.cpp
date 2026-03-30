#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    int nn = n - 1;
    int size = num_list.size();
    
    for(int i = nn; i < size; i++) {
        answer.push_back(num_list[i]);
    }
    
    return answer;
}