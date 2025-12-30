#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int count = 0;
    
    for(auto it = seoul.begin(); it != seoul.end(); it++){
        if(*it == "Kim"){
            return "김서방은 " + to_string(count) + "에 있다";
        }
        else {
            count++;
        }
    }
    
    return answer;
}