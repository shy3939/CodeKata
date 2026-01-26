#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(char c : s) {
        if(c < 91 && c + n > 90) {
            c = c + n - 26; 
        }
        else if(c > 96 && c + n > 122) {
            c = c + n - 26;
        }
        else if(c + n > 64 && c + n < 91) c = c + n;
        else if(c + n > 96 && c + n < 123) c = c + n;
        else c = c;

        answer.push_back(c);
    }
    return answer;
}