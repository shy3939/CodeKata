#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    char l = letter[0];
    for(char c : my_string) {
        if(c != l) answer += c;
    }
    return answer;
}