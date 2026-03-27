#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    
    for(string s : strlist) {
        int size = s.size();
        answer.push_back(size);
    }
    return answer;
}