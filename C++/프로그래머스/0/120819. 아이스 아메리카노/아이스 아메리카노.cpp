#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int share = money / 5500;
    int mod = money % 5500;
    
    answer.push_back(share);
    answer.push_back(mod);
    
    return answer;
}