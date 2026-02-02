#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int size = s.size();
    
    for(int i = 0; i < size; i++) {
        bool found = false;
        if(i == 0) answer.push_back(-1);
        
        if(i > 0) {
            for(int j = i - 1; j >= 0; j--) {
                if(s[i] == s[j]) {
                    int a = i - j;
                    answer.push_back(a);
                    found = true;
                    break;
                }
            }
            if(!found) answer.push_back(-1);
        }
    }
    
    return answer;
}