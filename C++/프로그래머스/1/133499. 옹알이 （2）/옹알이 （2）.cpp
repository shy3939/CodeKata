#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> word = {"aya", "ye", "woo", "ma"};
    
    for(string s : babbling) {
        
        for(int i = 0; i < 4; i++) {
            string target = word[i];
            if(s.find(target + target) != string::npos) break;
            
            size_t pos = s.find(target);
            while(pos != string::npos) {
                int len = target.length();
                string num = to_string(i);
                s.replace(pos, len, num);
                pos = s.find(target);
            }
        }
        bool check = true;
        for(char c : s) {
            if(c < '0' || c > '3') {
                check = false;
                break;
            }
        }
        if(check) answer++;
    }
    
    return answer;
}