#include <string>
#include <vector>

std::string solution(std::string phone_number) {
    std::string answer = "";
    int count = 0;
    
    for(char s : phone_number){
        if(count < phone_number.size() - 4){
            s = '*';
            answer.push_back(s);
            count++;
        }
        else answer.push_back(s);
        
    }
    
    return answer;
}