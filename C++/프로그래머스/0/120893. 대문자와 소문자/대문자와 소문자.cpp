#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(char c : my_string) {
        if(isupper(c)) c = tolower(c);
        else c = toupper(c);
        answer += c;
    }
    return answer;
}