#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    while(!s.empty()) {
        string target = "";
        int count_x = 0;
        int count = 0;
        bool split = false;
        
        for(char c : s) {
            if(c == s[0]) {
                count_x++;
                target += c;
            }
            else {
                count++;
                target += c;
            }
            
            if(count == count_x) {
                answer++;
                split = true;
                break;
            }
        }
        
        if(!split) {
            answer++;
            break;
        }
        s.erase(0, target.length());
    }
    
    return answer;
}