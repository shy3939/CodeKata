#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = false;
    int size = s.size();
    int count_c = 0;
    int count_n = 0;
    
    if(size == 4 || size == 6){
        for(char c : s){
            if(c >= 'A' && c <= 'Z'){
                count_c++;
            }
            if(c >= 'a' && c <= 'z'){
                count_c++;
            }
            if(c >= '0' && c <= '9'){
                count_n++;
            }
        }
    }
    
    if(count_c == 0 && count_n == 4) answer = true;
    else if(count_c == 0 && count_n == 6) answer = true;
    else answer = false;
    
    
    return answer;
}