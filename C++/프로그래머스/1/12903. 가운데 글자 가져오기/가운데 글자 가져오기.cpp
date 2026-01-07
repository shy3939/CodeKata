#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int size_ = s.size();
    // 홀수일 경우
    if(size_ % 2 == 1){
        for(int i = 0; i < size_; i++){
            char c = s[i];
            if(i == size_/2) { answer.push_back(c); }
        }
    }
    // 짝수일 경우
    else{
        for(int i = 0; i < size_; i++){
            char c = s[i];
            if(i == (size_/2-1)) { answer.push_back(c); }
            if(i == (size_/2)) { answer.push_back(c); }
            
        }
    }
    
    return answer;
}